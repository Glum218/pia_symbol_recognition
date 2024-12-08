#ifndef LOADING_H
#define LOADING_H

#include <cstdint>
#include <fstream>

uint32_t swap_endian32(uint32_t value);
uint16_t swap_endian16(uint16_t value);
uint32_t read_uint32(std::ifstream& file);
uint16_t read_uint16(std::ifstream& file);
struct MNISTData;
void load_training_data(const std::string& images_path, const std::string& labels_path, MNISTData& data);
void load_testing_data(const std::string& images_path, const std::string& labels_path, MNISTData& data);
struct MNISTDataReady;
MNISTDataReady convert_to_ready_format(const MNISTData& data);


#endif