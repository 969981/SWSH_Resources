/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a24630; name: FUN_00a24630
 */


void FUN_00a24630(long param_1,long *param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long local_58;
  long *plStack_50;
  undefined4 local_48;
  byte local_44;
  byte local_43;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  iVar3 = (**(code **)(*param_2 + 0x870))(param_2);
  bVar2 = (**(code **)(*param_2 + 0x998))(param_2,0x4000);
  local_43 = (**(code **)(*param_2 + 0x9a0))(param_2,0x40);
  local_44 = bVar2 & 1;
  local_43 = local_43 & 1;
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  *(undefined8 *)(param_1 + 0x7d8) = 0;
  *(undefined8 *)(param_1 + 2000) = 0;
  *(undefined8 *)(param_1 + 0x7c8) = 0;
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  *(undefined8 *)(param_1 + 0x7b8) = 0;
  *(undefined8 *)(param_1 + 0x7b0) = 0;
  *(undefined8 *)(param_1 + 0x7a8) = 0;
  *(undefined8 *)(param_1 + 0x7a0) = 0;
  *(undefined8 *)(param_1 + 0x798) = 0;
  *(undefined8 *)(param_1 + 0x790) = 0;
  *(undefined8 *)(param_1 + 0x788) = 0;
  *(undefined8 *)(param_1 + 0x780) = 0;
  *(undefined8 *)(param_1 + 0x778) = 0;
  *(undefined8 *)(param_1 + 0x770) = 0;
  *(undefined8 *)(param_1 + 0x768) = 0;
  *(undefined8 *)(param_1 + 0x760) = 0;
  *(undefined8 *)(param_1 + 0x758) = 0;
  *(undefined8 *)(param_1 + 0x750) = 0;
  *(undefined8 *)(param_1 + 0x748) = 0;
  *(undefined8 *)(param_1 + 0x740) = 0;
  local_58 = param_1;
  plStack_50 = param_2;
  local_48 = param_3;
  if (iVar3 == 2) {
    uVar4 = FUN_00a0a320(param_2,0);
    uVar6 = 5;
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    FUN_00a24a80(&local_58,0,4,uVar6);
    FUN_00a24a80(&local_58,2,5,5);
    FUN_00a24a80(&local_58,4,6,5);
    FUN_00a24a80(&local_58,6,7,5);
    lVar8 = *(long *)(param_1 + 0x5d8);
    if (*(char *)(lVar8 + 0x7c) != '\0') {
      *(undefined1 *)(lVar8 + 0x7c) = 0;
      *(byte *)(*(long *)(lVar8 + 0x80) + 0x58) = *(byte *)(*(long *)(lVar8 + 0x80) + 0x58) & 0xfe;
    }
    lVar9 = *(long *)(param_1 + 0x5f8);
    lVar8 = *(long *)(param_1 + 0x718);
    if (*(char *)(lVar9 + 0x7c) != '\0') {
      *(undefined1 *)(lVar9 + 0x7c) = 0;
      *(byte *)(*(long *)(lVar9 + 0x80) + 0x58) = *(byte *)(*(long *)(lVar9 + 0x80) + 0x58) & 0xfe;
    }
    if (*(char *)(lVar8 + 0x204) != '\0') {
      *(undefined1 *)(lVar8 + 0x204) = 0;
      *(byte *)(*(long *)(lVar8 + 0x208) + 0x58) = *(byte *)(*(long *)(lVar8 + 0x208) + 0x58) & 0xfe
      ;
    }
    lVar9 = *(long *)(param_1 + 0x618);
    lVar8 = *(long *)(param_1 + 0x718);
    if (*(char *)(lVar9 + 0x7c) != '\0') {
      *(undefined1 *)(lVar9 + 0x7c) = 0;
      *(byte *)(*(long *)(lVar9 + 0x80) + 0x58) = *(byte *)(*(long *)(lVar9 + 0x80) + 0x58) & 0xfe;
    }
    if (*(char *)(lVar8 + 0x38c) != '\0') {
      *(undefined1 *)(lVar8 + 0x38c) = 0;
      *(byte *)(*(long *)(lVar8 + 0x390) + 0x58) = *(byte *)(*(long *)(lVar8 + 0x390) + 0x58) & 0xfe
      ;
    }
    lVar9 = *(long *)(param_1 + 0x638);
    lVar8 = *(long *)(param_1 + 0x718);
    if (*(char *)(lVar9 + 0x7c) != '\0') {
      *(undefined1 *)(lVar9 + 0x7c) = 0;
      *(byte *)(*(long *)(lVar9 + 0x80) + 0x58) = *(byte *)(*(long *)(lVar9 + 0x80) + 0x58) & 0xfe;
    }
    if (*(char *)(lVar8 + 0x514) == '\0') goto LAB_00a24a10;
    *(undefined1 *)(lVar8 + 0x514) = 0;
    lVar8 = *(long *)(lVar8 + 0x518);
  }
  else {
    if (iVar3 == 1) {
      uVar4 = FUN_00a0a320(param_2,2);
      uVar5 = FUN_00a0a320(param_2,3);
      uVar6 = 5;
      if ((uVar4 & 1) != 0) {
        uVar6 = 1;
      }
      uVar7 = 3;
      if ((uVar5 & 1) == 0) {
        uVar7 = 5;
      }
      FUN_00a24a80(5,&local_58,0,0,0);
      FUN_00a24a80(&local_58,2,1,uVar6);
      FUN_00a24a80(&local_58,1,2,2);
      FUN_00a24a80(&local_58,3,3,uVar7);
LAB_00a24990:
      lVar8 = *(long *)(param_1 + 0x658);
      cVar1 = *(char *)(lVar8 + 0x7c);
    }
    else {
      if (iVar3 != 0) {
        return;
      }
      FUN_00a24a80(&local_58,0,0,0);
      FUN_00a24a80(&local_58,1,2,2);
      lVar9 = *(long *)(param_1 + 0x5f8);
      lVar8 = *(long *)(param_1 + 0x718);
      if (*(char *)(lVar9 + 0x7c) != '\0') {
        *(undefined1 *)(lVar9 + 0x7c) = 0;
        *(byte *)(*(long *)(lVar9 + 0x80) + 0x58) = *(byte *)(*(long *)(lVar9 + 0x80) + 0x58) & 0xfe
        ;
      }
      if (*(char *)(lVar8 + 0x204) != '\0') {
        *(undefined1 *)(lVar8 + 0x204) = 0;
        *(byte *)(*(long *)(lVar8 + 0x208) + 0x58) =
             *(byte *)(*(long *)(lVar8 + 0x208) + 0x58) & 0xfe;
      }
      lVar9 = *(long *)(param_1 + 0x638);
      lVar8 = *(long *)(param_1 + 0x718);
      if (*(char *)(lVar9 + 0x7c) != '\0') {
        *(undefined1 *)(lVar9 + 0x7c) = 0;
        *(byte *)(*(long *)(lVar9 + 0x80) + 0x58) = *(byte *)(*(long *)(lVar9 + 0x80) + 0x58) & 0xfe
        ;
      }
      if (*(char *)(lVar8 + 0x514) == '\0') goto LAB_00a24990;
      *(undefined1 *)(lVar8 + 0x514) = 0;
      *(byte *)(*(long *)(lVar8 + 0x518) + 0x58) = *(byte *)(*(long *)(lVar8 + 0x518) + 0x58) & 0xfe
      ;
      lVar8 = *(long *)(param_1 + 0x658);
      cVar1 = *(char *)(lVar8 + 0x7c);
    }
    if (cVar1 != '\0') {
      *(undefined1 *)(lVar8 + 0x7c) = 0;
      *(byte *)(*(long *)(lVar8 + 0x80) + 0x58) = *(byte *)(*(long *)(lVar8 + 0x80) + 0x58) & 0xfe;
    }
    lVar8 = *(long *)(param_1 + 0x678);
    if (*(char *)(lVar8 + 0x7c) != '\0') {
      *(undefined1 *)(lVar8 + 0x7c) = 0;
      *(byte *)(*(long *)(lVar8 + 0x80) + 0x58) = *(byte *)(*(long *)(lVar8 + 0x80) + 0x58) & 0xfe;
    }
    lVar8 = *(long *)(param_1 + 0x698);
    if (*(char *)(lVar8 + 0x7c) != '\0') {
      *(undefined1 *)(lVar8 + 0x7c) = 0;
      *(byte *)(*(long *)(lVar8 + 0x80) + 0x58) = *(byte *)(*(long *)(lVar8 + 0x80) + 0x58) & 0xfe;
    }
    lVar8 = *(long *)(param_1 + 0x6b8);
    if (*(char *)(lVar8 + 0x7c) == '\0') goto LAB_00a24a10;
    *(undefined1 *)(lVar8 + 0x7c) = 0;
    lVar8 = *(long *)(lVar8 + 0x80);
  }
  *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
LAB_00a24a10:
  iVar3 = (**(code **)(*param_2 + 0x868))(param_2);
  if (iVar3 == 0) {
    lVar8 = *(long *)(param_1 + 0x718);
    if (*(char *)(lVar8 + 0x38c) != '\0') {
      *(undefined1 *)(lVar8 + 0x38c) = 0;
      *(byte *)(*(long *)(lVar8 + 0x390) + 0x58) = *(byte *)(*(long *)(lVar8 + 0x390) + 0x58) & 0xfe
      ;
      lVar8 = *(long *)(param_1 + 0x718);
    }
    if (*(char *)(lVar8 + 0x514) != '\0') {
      *(undefined1 *)(lVar8 + 0x514) = 0;
      *(byte *)(*(long *)(lVar8 + 0x518) + 0x58) = *(byte *)(*(long *)(lVar8 + 0x518) + 0x58) & 0xfe
      ;
    }
  }
  return;
}


