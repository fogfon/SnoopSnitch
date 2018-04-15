package de.srlabs.patchalyzer.analysis;

class ProgressItem{
    private PatchalyzerService service;
    private String name = "";
    private double progress = 0;
    private double weight = 0;

    public ProgressItem(PatchalyzerService service, String name, double weight){
        this.service = service;
        this.name = name;
        this.weight = weight;
    }
    public void update(double progress){
        this.progress = progress;
        if(service != null)
            service.updateProgress(true);
    }
    public double getWeight(){
        return weight;
    }
    public double getProgress(){
        return progress;
    }
    public String getName(){
        return name;
    }
}