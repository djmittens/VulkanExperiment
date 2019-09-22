#include <VulkanExperiment/experiment.hpp>
#include <iostream>

int main() {
  // HelloTriangleApplication app;
  auto app = vke::platform::createApplication();
  try {
    app->run();
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}