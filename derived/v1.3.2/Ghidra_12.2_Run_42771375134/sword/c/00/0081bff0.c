/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081bff0; name: FUN_0081bff0
 */


void FUN_0081bff0(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 == param_1) {
    FUN_00801270(auStack_50,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include\\google/protobuf/repeated_field.h"
                 ,0x476);
    uVar2 = FUN_00800f30(auStack_50,"CHECK failed: (&other) != (this): ");
    FUN_00800fa0(auStack_58,uVar2);
    FUN_00801290(auStack_50);
    iVar1 = *param_2;
  }
  else {
    iVar1 = *param_2;
  }
  if (iVar1 != 0) {
    FUN_0081bd80(param_1,*param_1 + iVar1);
    memcpy((void *)(*(long *)(param_1 + 2) + (long)*param_1 * 8 + 8),
           (void *)(*(long *)(param_2 + 2) + 8),(long)*param_2 << 3);
    *param_1 = *param_1 + *param_2;
  }
  return;
}


