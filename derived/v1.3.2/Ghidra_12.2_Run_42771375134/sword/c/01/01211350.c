/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01211350; name: FUN_01211350
 */


void FUN_01211350(long param_1,undefined1 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  char local_80 [4];
  undefined1 local_7c;
  char local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x580));
  local_7c = *param_2;
  local_78 = param_2[4] != '\0';
  if ((bool)local_78) {
    local_74 = *(undefined8 *)(param_2 + 8);
    local_6c = *(undefined8 *)(param_2 + 0x10);
    local_64 = *(undefined8 *)(param_2 + 0x18);
    local_5c = *(undefined4 *)(param_2 + 0x20);
  }
  local_58 = *(undefined8 *)(param_2 + 0x24);
  local_50 = *(undefined8 *)(param_2 + 0x2c);
  local_48 = *(undefined8 *)(param_2 + 0x34);
  uStack_38 = (undefined5)((ulong)*(undefined8 *)(param_2 + 0x41) >> 0x18);
  uStack_40 = (undefined5)*(undefined8 *)(param_2 + 0x3c);
  local_3b = (undefined3)((ulong)*(undefined8 *)(param_2 + 0x3c) >> 0x28);
  local_80[0] = '\x01';
  *(undefined4 *)(param_1 + 0x310) = 3;
  if (*(char *)(param_1 + 0x3ac) == '\0') {
LAB_01211490:
    *(undefined1 *)(param_1 + 0x3b0) = local_7c;
    *(undefined1 *)(param_1 + 0x3b4) = 0;
    if (local_78 != '\0') {
      *(undefined8 *)(param_1 + 0x3b8) = local_74;
      *(undefined4 *)(param_1 + 0x3d0) = local_5c;
      *(undefined8 *)(param_1 + 0x3c8) = local_64;
      *(undefined8 *)(param_1 + 0x3c0) = local_6c;
      *(undefined1 *)(param_1 + 0x3b4) = 1;
    }
    *(undefined8 *)(param_1 + 0x3d4) = local_58;
    *(ulong *)(param_1 + 0x3f1) = CONCAT53(uStack_38,local_3b);
    *(ulong *)(param_1 + 0x3ec) = CONCAT35(local_3b,uStack_40);
    *(undefined8 *)(param_1 + 0x3dc) = local_50;
    *(undefined8 *)(param_1 + 0x3e4) = local_48;
    *(undefined1 *)(param_1 + 0x3ac) = 1;
LAB_01211588:
    FUN_01225e20(param_1 + 0x310);
    bVar5 = true;
    bVar4 = true;
    if (local_80[0] != '\0') goto LAB_01211414;
LAB_0121159c:
    uVar1 = FUN_0121bc60(param_2);
    if (!bVar5 && (uVar1 & 1) == 0) goto LAB_012115d0;
  }
  else {
    uVar2 = FUN_0121b9e0(param_1 + 0x3b0,(ulong)local_80 | 4);
    if ((uVar2 & 1) == 0) {
      if (*(char *)(param_1 + 0x3ac) == '\0') {
        if (local_80[0] != '\0') goto LAB_01211490;
      }
      else if (local_80[0] == '\0') {
        if (*(char *)(param_1 + 0x3b4) != '\0') {
          *(undefined1 *)(param_1 + 0x3b4) = 0;
        }
        *(undefined1 *)(param_1 + 0x3ac) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x3b0) = local_7c;
        if (*(char *)(param_1 + 0x3b4) == '\0') {
          if (local_78 != '\0') {
            *(undefined8 *)(param_1 + 0x3b8) = local_74;
            *(undefined4 *)(param_1 + 0x3d0) = local_5c;
            *(undefined8 *)(param_1 + 0x3c8) = local_64;
            *(undefined8 *)(param_1 + 0x3c0) = local_6c;
            *(undefined1 *)(param_1 + 0x3b4) = 1;
          }
        }
        else if (local_78 == '\0') {
          *(undefined1 *)(param_1 + 0x3b4) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x3d0) = (undefined1)local_5c;
          *(undefined8 *)(param_1 + 0x3c8) = local_64;
          *(undefined8 *)(param_1 + 0x3c0) = local_6c;
          *(undefined8 *)(param_1 + 0x3b8) = local_74;
        }
        *(undefined8 *)(param_1 + 0x3d4) = local_58;
        *(ulong *)(param_1 + 0x3f1) = CONCAT53(uStack_38,local_3b);
        *(undefined8 *)(param_1 + 0x3e4) = local_48;
        *(ulong *)(param_1 + 0x3ec) = CONCAT35(local_3b,uStack_40);
        *(undefined8 *)(param_1 + 0x3dc) = local_50;
      }
      goto LAB_01211588;
    }
    bVar5 = false;
    bVar4 = bVar5;
    if (local_80[0] == '\0') goto LAB_0121159c;
LAB_01211414:
    if (local_78 != '\0') {
      local_78 = '\0';
    }
    local_80[0] = '\0';
    uVar1 = FUN_0121bc60(param_2);
    if (!bVar4 && (uVar1 & 1) == 0) goto LAB_012115d0;
  }
  lVar3 = *(long *)PTR_DAT_02720700;
  if ((lVar3 != 0) && (uVar2 = FUN_012a4260(lVar3), (uVar2 & 1) != 0)) {
    FUN_012a5460(lVar3);
  }
LAB_012115d0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x580));
  return;
}


