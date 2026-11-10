/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008298a0; name: FUN_008298a0
 */


void FUN_008298a0(long param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  byte *pbVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  plVar7 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar7;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar7;
    do {
      if (param_2 <= (int)plVar5[4]) {
        plVar2 = plVar5;
      }
      plVar5 = (long *)plVar5[(int)plVar5[4] < param_2];
    } while (plVar5 != (long *)0x0);
    if ((plVar2 != plVar7) && ((int)plVar2[4] <= param_2)) goto LAB_00829938;
  }
  FUN_00801270(auStack_50,3,
               "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_set.cc"
               ,0x303);
  uVar1 = FUN_00800f30(auStack_50,"CHECK failed: iter != extensions_.end(): ");
  uVar1 = FUN_00800f30(uVar1,"Index out-of-bounds (field is empty).");
  FUN_00800fa0(auStack_18,uVar1);
  FUN_00801290(auStack_50);
  plVar2 = plVar7;
LAB_00829938:
  switch(*(undefined4 *)(PTR_DAT_02717150 + (ulong)*(byte *)(plVar2 + 6) * 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    *(int *)plVar2[5] = *(int *)plVar2[5] + -1;
    return;
  case 9:
    break;
  case 10:
    lVar3 = plVar2[5];
    lVar6 = (long)*(int *)(lVar3 + 8) + -1;
    *(int *)(lVar3 + 8) = (int)lVar6;
    (**(code **)(**(long **)(*(long *)(lVar3 + 0x10) + lVar6 * 8 + 8) + 0x38))();
    return;
  default:
    return;
  }
  lVar3 = plVar2[5];
  lVar6 = (long)*(int *)(lVar3 + 8) + -1;
  *(int *)(lVar3 + 8) = (int)lVar6;
  pbVar4 = *(byte **)(*(long *)(lVar3 + 0x10) + lVar6 * 8 + 8);
  if ((*pbVar4 & 1) == 0) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    return;
  }
  **(undefined1 **)(pbVar4 + 0x10) = 0;
  pbVar4[8] = 0;
  pbVar4[9] = 0;
  pbVar4[10] = 0;
  pbVar4[0xb] = 0;
  pbVar4[0xc] = 0;
  pbVar4[0xd] = 0;
  pbVar4[0xe] = 0;
  pbVar4[0xf] = 0;
  return;
}


