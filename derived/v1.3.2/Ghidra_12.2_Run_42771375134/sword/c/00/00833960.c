/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00833960; name: FUN_00833960
 */


void FUN_00833960(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_70 [48];
  undefined1 auStack_38 [8];
  
  if (param_2 == param_3) {
    return;
  }
  plVar4 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  if (plVar4 != param_1) {
    FUN_00801270(auStack_70,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_message_reflection.cc"
                 ,0x27f);
    uVar5 = FUN_00800f30(auStack_70,"CHECK failed: (message1->GetReflection()) == (this): ");
    uVar5 = FUN_00800f30(uVar5,"First argument to Swap() (of type \"");
    lVar6 = (**(code **)(*param_2 + 0xb8))(param_2);
    uVar5 = FUN_00800f60(uVar5,*(undefined8 *)(lVar6 + 8));
    uVar5 = FUN_00800f30(uVar5,
                         "\") is not compatible with this reflection object (which is for type \"");
    uVar5 = FUN_00800f60(uVar5,*(undefined8 *)(param_1[1] + 8));
    uVar5 = FUN_00800f30(uVar5,
                         "\").  Note that the exact same class is required; not just the same descriptor."
                        );
    FUN_00800fa0(auStack_38,uVar5);
    FUN_00801290(auStack_70);
  }
  plVar4 = (long *)(**(code **)(*param_3 + 0xb0))(param_3);
  if (plVar4 != param_1) {
    FUN_00801270(auStack_70,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_message_reflection.cc"
                 ,0x286);
    uVar5 = FUN_00800f30(auStack_70,"CHECK failed: (message2->GetReflection()) == (this): ");
    uVar5 = FUN_00800f30(uVar5,"Second argument to Swap() (of type \"");
    lVar6 = (**(code **)(*param_3 + 0xb8))(param_3);
    uVar5 = FUN_00800f60(uVar5,*(undefined8 *)(lVar6 + 8));
    uVar5 = FUN_00800f30(uVar5,
                         "\") is not compatible with this reflection object (which is for type \"");
    uVar5 = FUN_00800f60(uVar5,*(undefined8 *)(param_1[1] + 8));
    uVar5 = FUN_00800f30(uVar5,
                         "\").  Note that the exact same class is required; not just the same descriptor."
                        );
    FUN_00800fa0(auStack_38,uVar5);
    FUN_00801290(auStack_70);
  }
  lVar6 = (long)(int)param_1[7];
  if ((int)param_1[7] != -1) {
    if ((int)param_1[6] == -1) {
      uVar10 = *(ulong *)((long)param_2 + lVar6);
      uVar9 = uVar10 & 0xfffffffffffffffe;
      if ((uVar10 & 1) == 0) {
        uVar13 = *(ulong *)((long)param_3 + lVar6);
      }
      else {
        uVar9 = *(ulong *)(uVar9 + 8);
        uVar13 = *(ulong *)((long)param_3 + lVar6);
      }
      uVar12 = uVar13 & 0xfffffffffffffffe;
      if ((uVar13 & 1) != 0) {
        uVar12 = *(ulong *)(uVar12 + 8);
      }
      if (uVar9 != uVar12) goto LAB_00833b24;
    }
    else {
      uVar10 = *(ulong *)((long)param_2 + lVar6);
      if (uVar10 != *(ulong *)((long)param_3 + lVar6)) {
LAB_00833b24:
        uVar9 = uVar10;
        if (((int)param_1[6] == -1) && (uVar9 = uVar10 & 0xfffffffffffffffe, (uVar10 & 1) != 0)) {
          uVar9 = *(ulong *)(uVar9 + 8);
        }
        plVar4 = (long *)(**(code **)(*param_2 + 0x20))(param_2,uVar9);
        (**(code **)(*plVar4 + 0x90))(plVar4,param_2);
        (**(code **)(*param_2 + 0x88))(param_2,param_3);
        (**(code **)(*param_3 + 0x88))(param_3,plVar4);
        iVar2 = (int)param_1[7];
        if (iVar2 == -1) {
          uVar9 = 0;
        }
        else if ((int)param_1[6] == -1) {
          uVar10 = *(ulong *)((long)param_2 + (long)iVar2);
          uVar9 = uVar10 & 0xfffffffffffffffe;
          if ((uVar10 & 1) != 0) {
            uVar9 = *(ulong *)(uVar9 + 8);
          }
        }
        else {
          uVar9 = *(ulong *)((long)param_2 + (long)iVar2);
        }
        if (plVar4 == (long *)0x0) {
          return;
        }
        if (uVar9 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
          return;
        }
        return;
      }
    }
  }
  lVar6 = (long)(int)param_1[5];
  if ((int)param_1[5] == -1) {
    lVar6 = param_1[1];
    iVar2 = *(int *)(lVar6 + 0x2c);
  }
  else {
    iVar2 = *(int *)(param_1[1] + 0x2c);
    if (0 < iVar2) {
      uVar1 = iVar2 + 0x3e;
      if (-1 < (int)(iVar2 + 0x1fU)) {
        uVar1 = iVar2 + 0x1fU;
      }
      lVar11 = 0;
      do {
        lVar14 = lVar11 * 4;
        lVar11 = lVar11 + 1;
        uVar3 = *(undefined4 *)((long)param_2 + lVar14 + lVar6);
        *(undefined4 *)((long)param_2 + lVar14 + lVar6) =
             *(undefined4 *)((long)param_3 + lVar14 + lVar6);
        *(undefined4 *)((long)param_3 + lVar14 + lVar6) = uVar3;
      } while (lVar11 < (long)((ulong)uVar1 << 0x20) >> 0x25);
    }
    lVar6 = param_1[1];
    iVar2 = *(int *)(lVar6 + 0x2c);
  }
  if (0 < iVar2) {
    lVar14 = 0;
    lVar11 = 0;
    do {
      if (*(long *)(*(long *)(lVar6 + 0x30) + lVar14 + 0x58) == 0) {
        FUN_008301d0(param_1,param_2,param_3);
        lVar6 = param_1[1];
      }
      lVar11 = lVar11 + 1;
      lVar14 = lVar14 + 0x90;
    } while (lVar11 < *(int *)(lVar6 + 0x2c));
  }
  if (0 < *(int *)(lVar6 + 0x38)) {
    lVar14 = 0;
    lVar11 = 0;
    do {
      FUN_00831780(param_1,param_2,param_3,*(long *)(lVar6 + 0x40) + lVar14);
      lVar6 = param_1[1];
      lVar11 = lVar11 + 1;
      lVar14 = lVar14 + 0x30;
    } while (lVar11 < *(int *)(lVar6 + 0x38));
  }
  iVar2 = *(int *)((long)param_1 + 0x34);
  if (iVar2 != -1) {
    FUN_0082aca0((long)param_2 + (long)iVar2,(long)param_3 + (long)iVar2);
  }
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,param_2);
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,param_3);
  uVar5 = *puVar7;
  *puVar7 = *puVar8;
  *puVar8 = uVar5;
  return;
}


