/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00827320; name: FUN_00827320
 */


void FUN_00827320(undefined4 param_1,long param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  plVar4 = (long *)(param_2 + 8);
  plVar3 = (long *)*plVar4;
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar4;
    do {
      if (param_3 <= (int)plVar3[4]) {
        plVar2 = plVar3;
      }
      plVar3 = (long *)plVar3[(int)plVar3[4] < param_3];
    } while (plVar3 != (long *)0x0);
    if ((plVar2 != plVar4) && ((int)plVar2[4] <= param_3)) goto LAB_008273c4;
  }
  FUN_00801270(auStack_60,3,
               "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_set.cc"
               ,0x14a);
  uVar1 = FUN_00800f30(auStack_60,"CHECK failed: iter != extensions_.end(): ");
  uVar1 = FUN_00800f30(uVar1,"Index out-of-bounds (field is empty).");
  FUN_00800fa0(auStack_28,uVar1);
  FUN_00801290(auStack_60);
  plVar2 = plVar4;
LAB_008273c4:
  *(undefined4 *)(*(long *)(plVar2[5] + 8) + (long)param_4 * 4 + 8) = param_1;
  return;
}


