/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083f890; name: FUN_0083f890
 */


long FUN_0083f890(long param_1,long param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_78 [8];
  long *local_70 [6];
  
  uVar2 = FUN_00825b90(param_1,*(undefined4 *)(param_2 + 0x38),param_2,local_70);
  plVar6 = local_70[0];
  if ((uVar2 & 1) != 0) {
    *(char *)(local_70[0] + 1) = (char)*(undefined4 *)(param_2 + 0x3c);
    *(undefined1 *)((long)local_70[0] + 9) = 1;
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar7 == 0) {
      plVar3 = operator_new(0x18);
      plVar3[1] = 0;
      plVar3[2] = 0;
      *plVar3 = 0;
    }
    else {
      plVar3 = (long *)FUN_0080efb0(lVar7,0,0x18);
      plVar3[1] = 0;
      plVar3[2] = 0;
      *plVar3 = lVar7;
      FUN_0080eeb0(lVar7,plVar3,PTR_LAB_02717198);
      plVar6 = local_70[0];
    }
    *plVar6 = (long)plVar3;
  }
  lVar7 = *local_70[0];
  piVar5 = *(int **)(lVar7 + 0x10);
  if (piVar5 != (int *)0x0) {
    iVar1 = *(int *)(lVar7 + 8);
    if (iVar1 < *piVar5) {
      *(int *)(lVar7 + 8) = iVar1 + 1;
      if (*(long *)(piVar5 + (long)iVar1 * 2 + 2) != 0) {
        return *(long *)(piVar5 + (long)iVar1 * 2 + 2);
      }
      lVar7 = *local_70[0];
    }
  }
  if (*(int *)(lVar7 + 8) == 0) {
    plVar6 = (long *)(**(code **)(*param_3 + 0x10))(param_3,*(undefined8 *)(param_2 + 0x68));
    if (plVar6 == (long *)0x0) {
      FUN_00801270(local_70,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_set_heavy.cc"
                   ,0x109);
      uVar4 = FUN_00800f30(local_70,"CHECK failed: prototype != NULL: ");
      FUN_00800fa0(auStack_78,uVar4);
      FUN_00801290(local_70);
    }
  }
  else {
    plVar6 = *(long **)(*(long *)(lVar7 + 0x10) + 8);
  }
  lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,*(undefined8 *)(param_1 + 0x18));
  FUN_00829780(*local_70[0],lVar7);
  return lVar7;
}


