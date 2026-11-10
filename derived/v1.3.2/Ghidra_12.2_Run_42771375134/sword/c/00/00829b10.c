/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00829b10; name: FUN_00829b10
 */


void FUN_00829b10(long param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  plVar9 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar9;
  if (plVar6 == (long *)0x0) {
LAB_00829b68:
    FUN_00801270(auStack_60,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_set.cc"
                 ,0x336);
    uVar3 = FUN_00800f30(auStack_60,"CHECK failed: iter != extensions_.end(): ");
    uVar3 = FUN_00800f30(uVar3,"Index out-of-bounds (field is empty).");
    FUN_00800fa0(auStack_28,uVar3);
    FUN_00801290(auStack_60);
    plVar4 = plVar9;
  }
  else {
    plVar4 = plVar9;
    do {
      if (param_2 <= (int)plVar6[4]) {
        plVar4 = plVar6;
      }
      plVar6 = (long *)plVar6[(int)plVar6[4] < param_2];
    } while (plVar6 != (long *)0x0);
    if ((plVar4 == plVar9) || (param_2 < (int)plVar4[4])) goto LAB_00829b68;
  }
  switch(*(undefined4 *)(PTR_DAT_02717150 + (ulong)*(byte *)(plVar4 + 6) * 4)) {
  case 1:
  case 3:
  case 6:
  case 8:
    uVar7 = -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2;
    lVar5 = *(long *)(plVar4[5] + 8) + 8;
    uVar8 = -(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_4 << 2;
    uVar1 = *(undefined4 *)(lVar5 + uVar7);
    *(undefined4 *)(lVar5 + uVar7) = *(undefined4 *)(lVar5 + uVar8);
    *(undefined4 *)(lVar5 + uVar8) = uVar1;
    break;
  case 2:
  case 4:
  case 5:
    lVar5 = *(long *)(plVar4[5] + 8);
    goto LAB_00829c20;
  case 7:
    lVar5 = *(long *)(plVar4[5] + 8) + 8;
    uVar2 = *(undefined1 *)(lVar5 + (int)param_3);
    *(undefined1 *)(lVar5 + (int)param_3) = *(undefined1 *)(lVar5 + (int)param_4);
    *(undefined1 *)(lVar5 + (int)param_4) = uVar2;
    break;
  case 9:
  case 10:
    lVar5 = *(long *)(plVar4[5] + 0x10);
LAB_00829c20:
    uVar7 = -(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulong)param_3 << 3;
    lVar5 = lVar5 + 8;
    uVar8 = -(ulong)(param_4 >> 0x1f) & 0xfffffff800000000 | (ulong)param_4 << 3;
    uVar3 = *(undefined8 *)(lVar5 + uVar7);
    *(undefined8 *)(lVar5 + uVar7) = *(undefined8 *)(lVar5 + uVar8);
    *(undefined8 *)(lVar5 + uVar8) = uVar3;
  }
  return;
}


