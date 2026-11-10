/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00834cb0; name: FUN_00834cb0
 */


ulong FUN_00834cb0(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  undefined1 auStack_60 [48];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_3 + 0x50) != *(long *)(param_1 + 8)) {
    FUN_008344d0(*(long *)(param_1 + 8),param_3,"FieldSize","Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x40) != 3) {
    FUN_008344d0(*(undefined8 *)(param_1 + 8),param_3,"FieldSize",
                 "Field is singular; the method requires a repeated field.");
  }
  if (*(char *)(param_3 + 0x44) != '\0') {
    uVar1 = FUN_008256f0(param_2 + *(int *)(param_1 + 0x34),*(undefined4 *)(param_3 + 0x38));
    return uVar1;
  }
  switch(*(undefined4 *)(PTR_DAT_02716e20 + (ulong)*(uint *)(param_3 + 0x3c) * 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    break;
  case 9:
  case 10:
    uVar1 = FUN_007e4b30(param_3);
    lVar4 = *(long *)(param_3 + 0x58);
    if ((uVar1 & 1) == 0) {
      if (lVar4 == 0) {
        if (*(char *)(param_3 + 0x44) == '\0') {
          plVar5 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
        }
        else if (*(long *)(param_3 + 0x60) == 0) {
          plVar5 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
        }
        else {
          plVar5 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
        }
        iVar3 = (int)((ulong)(param_3 - *plVar5) >> 4) * 0x38e38e39;
      }
      else {
        lVar4 = lVar4 - *(long *)(*(long *)(lVar4 + 0x10) + 0x40) >> 4;
        uVar1 = lVar4 * -0x5555555555555555;
        if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                    (-(uVar1 >> 0x1f & 1) & 0xfffffffc00000000 |
                    lVar4 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_3 + 0x38)) {
          param_2 = *(long *)(param_1 + 0x18);
          if (*(char *)(param_3 + 0x44) == '\0') {
            plVar5 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
          }
          else if (*(long *)(param_3 + 0x60) == 0) {
            plVar5 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
          }
          else {
            plVar5 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
          }
          piVar6 = (int *)(*(long *)(param_1 + 0x20) +
                          ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar5) >> 4) * 0x38e38e39)
                                 << 0x20) >> 0x1e));
          goto LAB_00835074;
        }
        iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar1;
      }
      piVar6 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
LAB_00835074:
      return (ulong)*(uint *)(param_2 + *piVar6 + 8);
    }
    if (lVar4 == 0) {
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar5 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar5 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar5 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      iVar3 = (int)((ulong)(param_3 - *plVar5) >> 4) * 0x38e38e39;
    }
    else {
      lVar4 = lVar4 - *(long *)(*(long *)(lVar4 + 0x10) + 0x40) >> 4;
      uVar1 = lVar4 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                  (-(uVar1 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar4 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_3 + 0x38)) {
        param_2 = *(long *)(param_1 + 0x18);
        if (*(char *)(param_3 + 0x44) == '\0') {
          plVar5 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
        }
        else if (*(long *)(param_3 + 0x60) == 0) {
          plVar5 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
        }
        else {
          plVar5 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
        }
        piVar6 = (int *)(*(long *)(param_1 + 0x20) +
                        ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar5) >> 4) * 0x38e38e39)
                               << 0x20) >> 0x1e));
        goto LAB_00835038;
      }
      iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar1;
    }
    piVar6 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
LAB_00835038:
    lVar4 = FUN_0081dbe0(param_2 + *piVar6);
    return (ulong)*(uint *)(lVar4 + 8);
  default:
    FUN_00801270(auStack_60,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_message_reflection.cc"
                 ,0x31c);
    uVar2 = FUN_00800f30(auStack_60,"Can\'t get here.");
    FUN_00800fa0(auStack_28,uVar2);
    FUN_00801290(auStack_60);
    return 0;
  }
  lVar4 = *(long *)(param_3 + 0x58);
  if (lVar4 == 0) {
    iVar3 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x30)) >> 4) * 0x38e38e39;
  }
  else {
    lVar4 = lVar4 - *(long *)(*(long *)(lVar4 + 0x10) + 0x40) >> 4;
    uVar1 = lVar4 * -0x5555555555555555;
    if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                (-(uVar1 >> 0x1f & 1) & 0xfffffffc00000000 |
                lVar4 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_3 + 0x38)) {
      param_2 = *(long *)(param_1 + 0x18);
      piVar6 = (int *)(*(long *)(param_1 + 0x20) +
                      ((long)((ulong)(uint)((int)((ulong)(param_3 -
                                                         *(long *)(*(long *)(param_3 + 0x50) + 0x30)
                                                         ) >> 4) * 0x38e38e39) << 0x20) >> 0x1e));
      goto LAB_00834e18;
    }
    iVar3 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar1;
  }
  piVar6 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar3 * 4);
LAB_00834e18:
  return (ulong)*(uint *)(param_2 + *piVar6);
}


