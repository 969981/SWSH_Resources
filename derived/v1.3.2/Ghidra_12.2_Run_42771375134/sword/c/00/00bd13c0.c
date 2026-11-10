/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd13c0; name: FUN_00bd13c0
 */


/* WARNING: Removing unreachable block (ram,0x00bd15ac) */
/* WARNING: Removing unreachable block (ram,0x00bd1534) */

void FUN_00bd13c0(long param_1,long param_2,undefined4 param_3,uint param_4,ulong param_5)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  switch(param_3) {
  case 0:
    if (0x1d < param_4) {
      return;
    }
    lVar3 = param_1 + (ulong)param_4;
    lVar4 = 0x2d68;
    break;
  case 1:
    if (0x1d < param_4) {
      return;
    }
    lVar3 = param_1 + (ulong)param_4;
    lVar4 = 0x2d86;
    break;
  case 2:
    if (0x1d < param_4) {
      return;
    }
    lVar3 = param_1 + (ulong)param_4;
    lVar4 = 0x2da4;
    break;
  case 3:
    if (5 < param_4) {
      return;
    }
    lVar3 = param_1 + (ulong)param_4;
    lVar4 = 0x2dc2;
    break;
  default:
    goto switchD_00bd1404_default;
  }
  uVar5 = (ulong)*(byte *)(lVar3 + lVar4);
  lVar4 = *(long *)(param_1 + 0x60);
  lVar3 = param_1 + uVar5 * 0x78 + 0x68;
  if ((param_2 == 0) || (uVar2 = FUN_008787d0(param_2), (uVar2 & 1) != 0)) {
    FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),lVar3,0);
    return;
  }
  if (((param_5 & 1) == 0) ||
     (uVar2 = FUN_0167b9f0(*(undefined8 *)(param_1 + 0x58),lVar3), (uVar2 & 1) == 0)) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    FUN_0168c890(lVar4 + uVar5 * 0x3e0,param_2,0,1,&local_d0);
    pcVar1 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar1)(auStack_b0);
    }
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    FUN_0168c890(lVar4 + uVar5 * 0x3e0 + 0x17400,param_2,0,2,&local_d0);
    pcVar1 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar1)(auStack_b0);
    }
    FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),lVar3,1);
  }
switchD_00bd1404_default:
  return;
}


