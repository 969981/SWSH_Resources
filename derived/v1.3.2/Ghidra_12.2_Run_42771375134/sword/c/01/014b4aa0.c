/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b4aa0; name: FUN_014b4aa0
 */


void FUN_014b4aa0(undefined8 param_1,undefined8 *param_2,uint param_3,undefined2 param_4)

{
  int iVar1;
  tm *ptVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  time_t local_48;
  undefined8 local_38;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  auVar6 = FUN_014b5020();
  if (0xe < param_3) goto switchD_014b4b10_caseD_5;
  uVar3 = auVar6._0_8_ & 0xffffffff;
  switch(param_3) {
  case 0:
  case 1:
    uVar5 = *param_2;
    goto LAB_014b4b80;
  case 2:
    local_38 = FUN_006c5800();
    local_48 = FUN_006c5880(&local_38);
    ptVar2 = localtime(&local_48);
    iVar1 = ptVar2->tm_year;
    FUN_014b5cb0(*param_2,param_4,
                 iVar1 + ((uint)((ulong)((long)iVar1 * 0x51eb851f) >> 0x25) - (iVar1 >> 0x1f)) *
                         -100 & 0xffff,ptVar2->tm_mon * 0x10000 + 0x10000U >> 0x10 & 0xff,
                 (char)ptVar2->tm_mday);
    break;
  case 3:
  case 0xd:
    FUN_014b5990(*param_2);
    break;
  case 4:
  case 0xe:
    FUN_014b5830(*param_2);
    break;
  default:
    goto switchD_014b4b10_caseD_5;
  case 8:
    FUN_014b5a60(*param_2,lVar4,uVar3,param_1);
    break;
  case 9:
    FUN_014b5db0(*param_2,lVar4,0xea62,param_1);
    break;
  case 0xb:
    uVar5 = *param_2;
    uVar3 = FUN_014b52d0(auVar6._0_8_,auVar6._8_8_,uVar3);
    uVar3 = uVar3 & 0xffffffff;
LAB_014b4b80:
    FUN_014b5530(uVar5,lVar4,uVar3,param_1);
switchD_014b4b10_caseD_5:
joined_r0x014b4bcc:
    if (lVar4 == 0) {
      return;
    }
    goto LAB_014b4b90;
  case 0xc:
    FUN_014b5db0(*param_2,lVar4,param_4,param_1);
    goto joined_r0x014b4bcc;
  }
  if (lVar4 != 0) {
LAB_014b4b90:
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


