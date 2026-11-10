/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1b110; name: FUN_00a1b110
 */


void FUN_00a1b110(long param_1,long *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_38;
  
  lVar6 = (**(code **)(*param_2 + 0x7f8))(param_2,param_3);
  uVar4 = (**(code **)(*param_2 + 0x8e8))(param_2,param_3);
  if (lVar6 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x84) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x7d) == '\0') {
    bVar3 = 0;
LAB_00a1b1b8:
    uVar5 = (uint)*(byte *)(param_1 + 0x7c);
    if (*(byte *)(param_1 + 0x7c) != 0) {
LAB_00a1b1c0:
      uVar5 = FUN_008e0a10(lVar6);
      uVar5 = uVar5 & 1;
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x85);
    bVar3 = (**(code **)(*param_2 + 2000))(param_2,uVar4);
    if (*(char *)(param_1 + 0x85) != '\0') goto LAB_00a1b1b8;
    if ((param_4 & 1) == 0) {
      bVar3 = cVar2 != '\0';
    }
    if (*(char *)(param_1 + 0x7c) != '\0') goto LAB_00a1b1c0;
    uVar5 = 0;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = 2;
  if ((bVar3 & 1) == 0) {
    uVar1 = uVar5;
  }
  if (*(int *)(param_1 + 0x80) == 2) {
    if (uVar1 != 1) {
      if (uVar1 == 0) {
        local_38 = *(undefined8 *)(param_1 + 0xa0);
        if (*(char *)(param_1 + 0x7c) != '\0') {
          FUN_00ffd430(uVar7,param_1 + 0x88);
          FUN_00ffd430(uVar7,param_1 + 0x90);
        }
        if (*(char *)(param_1 + 0x7d) != '\0') {
          FUN_00ffd430(uVar7,param_1 + 0x98);
          FUN_00ffd430(uVar7,param_1 + 0xa0);
        }
        FUN_00ffd430(uVar7,param_1 + 0xa8);
        FUN_00ffd010(uVar7,&local_38);
        *(undefined1 *)(param_1 + 0x85) = 0;
      }
      goto LAB_00a1b360;
    }
LAB_00a1b294:
    local_38 = *(undefined8 *)(param_1 + 0x88);
    cVar2 = *(char *)(param_1 + 0x7c);
joined_r0x00a1b2a0:
    if (cVar2 != '\0') {
      FUN_00ffd430(uVar7,param_1 + 0x88);
      FUN_00ffd430(uVar7,param_1 + 0x90);
    }
    if (*(char *)(param_1 + 0x7d) != '\0') {
      FUN_00ffd430(uVar7,param_1 + 0x98);
      FUN_00ffd430(uVar7,param_1 + 0xa0);
    }
    FUN_00ffd430(uVar7,param_1 + 0xa8);
    FUN_00ffd010(uVar7,&local_38);
  }
  else {
    if (*(int *)(param_1 + 0x80) == 1) {
      if (uVar1 != 2) {
        if (uVar1 != 0) goto LAB_00a1b360;
        local_38 = *(undefined8 *)(param_1 + 0x90);
        cVar2 = *(char *)(param_1 + 0x7c);
        goto joined_r0x00a1b2a0;
      }
    }
    else if (uVar1 != 2) {
      if (uVar1 != 1) goto LAB_00a1b360;
      goto LAB_00a1b294;
    }
    local_38 = *(undefined8 *)(param_1 + 0x98);
    if (*(char *)(param_1 + 0x7c) != '\0') {
      FUN_00ffd430(uVar7,param_1 + 0x88);
      FUN_00ffd430(uVar7,param_1 + 0x90);
    }
    if (*(char *)(param_1 + 0x7d) != '\0') {
      FUN_00ffd430(uVar7,param_1 + 0x98);
      FUN_00ffd430(uVar7,param_1 + 0xa0);
    }
    FUN_00ffd430(uVar7,param_1 + 0xa8);
    FUN_00ffd010(uVar7,&local_38);
    *(undefined1 *)(param_1 + 0x85) = 1;
  }
LAB_00a1b360:
  *(uint *)(param_1 + 0x80) = uVar1;
  return;
}


