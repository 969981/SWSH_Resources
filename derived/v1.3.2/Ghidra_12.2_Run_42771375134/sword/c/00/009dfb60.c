/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009dfb60; name: FUN_009dfb60
 */


void FUN_009dfb60(long *param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined1 local_40 [4];
  uint local_3c;
  undefined1 auStack_38 [8];
  
  uVar6 = (ulong)param_4;
  uVar2 = FUN_008efa90(*(undefined4 *)(param_2 + 0xd),*(undefined1 *)((long)param_2 + 0x6d));
  if ((uVar2 & 1) == 0) {
LAB_009dfc94:
    *param_1 = 0;
    return;
  }
  if (*(char *)((long)param_2 + 0x74) == '\0') {
    if (*(uint *)(param_2 + 0xf) == param_4) {
      local_40[0] = 0;
      uVar3 = param_2[0xc];
      uVar5 = *param_2;
      bVar1 = *(char *)((long)param_2 + 0x6c) != '\0';
      goto LAB_009dfbe4;
    }
    if ((*(char *)((long)param_2 + 0x7c) == '\0') ||
       (uVar2 = FUN_008f0250(*(undefined4 *)(param_2 + 0xd),*(undefined1 *)((long)param_2 + 0x6c),
                             *(undefined1 *)((long)param_2 + 0x6d),uVar6), (uVar2 & 1) == 0))
    goto LAB_009dfc94;
    local_40[0] = 1;
  }
  else {
    local_40[0] = 2;
  }
  uVar3 = param_2[0xc];
  uVar5 = *param_2;
  bVar1 = false;
LAB_009dfbe4:
  local_3c = param_4;
  local_48 = FUN_009dee50(uVar3,bVar1,uVar6,uVar5);
  local_4c[0] = 0;
  lVar4 = FUN_009dfda0(auStack_38,*param_2,param_2 + 0x11,param_2 + 0x13,&local_48,
                       param_2 + uVar6 + 0x15,param_2 + uVar6 + 0x1a,(long)param_2 + 0x6c,&local_3c,
                       local_40,param_2 + 0xe,local_4c,param_2 + 0x10,param_2,param_2 + uVar6 + 2,
                       param_2 + uVar6 + 7,param_2 + 1);
  *param_1 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  return;
}


