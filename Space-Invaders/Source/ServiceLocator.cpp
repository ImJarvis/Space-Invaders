#include "../Headers/ServiceLocator.hpp"


ServiceLocator::ServiceLocator()
{
    graphic_service = nullptr;
    event_service = nullptr;
    createServices();
}
ServiceLocator::~ServiceLocator()
{
    clearAllServices();
}

void ServiceLocator::createServices()
{

    graphic_service = new GraphicService();
    event_service = new EventService();
}

void ServiceLocator::clearAllServices()
{
    delete graphic_service; graphic_service = nullptr;
    delete event_service; event_service = nullptr;
}

ServiceLocator* ServiceLocator::getInstance()
{
    static ServiceLocator obj;
    return &obj;
}

void ServiceLocator::initialize()
{
    graphic_service->initialize();
    event_service->initialize();
}

void ServiceLocator::update()
{
    graphic_service->update();
    event_service->update();
}

void ServiceLocator::render()
{
    graphic_service->render();
}


GraphicService* ServiceLocator::getGraphicService() { return graphic_service; }
EventService* ServiceLocator::getEventService() { return event_service; }
