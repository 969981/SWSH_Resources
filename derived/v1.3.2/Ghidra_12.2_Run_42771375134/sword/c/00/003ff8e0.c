/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ff8e0; name: FUN_003ff8e0
 */


void FUN_003ff8e0(char *param_1)

{
  undefined4 local_70 [2];
  char *local_68;
  char *pcStack_60;
  undefined1 *local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_70[0] = 0x2c;
  local_68 = 
  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PxShared/src/foundation/src/switch/PsSwitchPrintString.cpp"
  ;
  pcStack_60 = "printString";
  local_48 = 0;
  local_58 = &DAT_01d38550;
  uStack_50 = 1;
  local_40 = 0;
  uStack_38 = 0;
  nn::diag::detail::LogImpl((LogMetaData *)local_70,param_1);
  local_70[0] = 0x2d;
  local_48 = 0;
  local_68 = 
  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PxShared/src/foundation/src/switch/PsSwitchPrintString.cpp"
  ;
  pcStack_60 = "printString";
  local_58 = &DAT_01d38550;
  uStack_50 = 1;
  local_40 = 0;
  uStack_38 = 0;
  nn::diag::detail::LogImpl((LogMetaData *)local_70,"\n");
  return;
}


