/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003baee0; name: FUN_003baee0
 */


void FUN_003baee0(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[2] = param_2;
  *param_1 = 0;
  param_1[1] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffc0;
  param_1[8] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
                    /* try { // try from 003baf60 to 003bafab has its CatchHandler @ 003bb064 */
  FUN_003bcb40(param_1 + 3,0x10);
  if ((*(uint *)((long)param_1 + 0x44) & 0x7ffffff0) == 0) {
    FUN_003bcc50(param_1 + 7,0x10);
  }
  if ((*(uint *)((long)param_1 + 0x34) & 0x7ffffff0) == 0) {
    FUN_003bcdb0(param_1 + 5,0x10);
  }
  lVar2 = FUN_003e9dc0(param_1[1],param_1);
  *param_1 = lVar2;
                    /* try { // try from 003bafb4 to 003bafc3 has its CatchHandler @ 003bb054 */
  uVar1 = FUN_00113750(*(undefined8 *)(param_3 + 0x748),param_1,lVar2,0);
  *(undefined4 *)(param_1 + 9) = uVar1;
  if (*param_1 == 0) {
    uVar3 = FUN_00400880();
    FUN_00400890(uVar3,0x20,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScArticulationSim.cpp"
                 ,0x48,"Articulation: could not allocate low-level resources.");
  }
  else {
                    /* try { // try from 003bafd0 to 003bb03b has its CatchHandler @ 003bb064 */
    uVar3 = FUN_003bd8a0(param_4);
    FUN_003bb250(param_1,uVar3,0,0);
    *(long **)param_1[2] = param_1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = param_2 + 8;
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0x13) = 0;
    *(undefined1 *)((long)param_1 + 0x9c) = 0;
    param_1[0x12] = 0;
    *(undefined2 *)((long)param_1 + 0x9e) = 0;
  }
  return;
}


