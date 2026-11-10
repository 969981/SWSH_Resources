/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00829a20; name: FUN_00829a20
 */


undefined8 FUN_00829a20(long param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  plVar7 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar7;
  if (plVar4 != (long *)0x0) {
    plVar2 = plVar7;
    do {
      if (param_2 <= (int)plVar4[4]) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[(int)plVar4[4] < param_2];
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar7) && ((int)plVar2[4] <= param_2)) goto LAB_00829ab8;
  }
  FUN_00801270(auStack_50,3,
               "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_set.cc"
               ,0x32c);
  uVar1 = FUN_00800f30(auStack_50,"CHECK failed: iter != extensions_.end(): ");
  uVar1 = FUN_00800f30(uVar1,"Index out-of-bounds (field is empty).");
  FUN_00800fa0(auStack_18,uVar1);
  FUN_00801290(auStack_50);
  plVar2 = plVar7;
LAB_00829ab8:
  lVar5 = plVar2[5];
  piVar3 = *(int **)(lVar5 + 0x10);
  lVar6 = (long)*(int *)(lVar5 + 8) + -1;
  *(int *)(lVar5 + 8) = (int)lVar6;
  uVar1 = *(undefined8 *)(piVar3 + lVar6 * 2 + 2);
  *piVar3 = *piVar3 + -1;
  piVar3 = *(int **)(lVar5 + 0x10);
  if (*(int *)(lVar5 + 8) < *piVar3) {
    *(undefined8 *)(piVar3 + (long)*(int *)(lVar5 + 8) * 2 + 2) =
         *(undefined8 *)(piVar3 + (long)*piVar3 * 2 + 2);
  }
  return uVar1;
}


