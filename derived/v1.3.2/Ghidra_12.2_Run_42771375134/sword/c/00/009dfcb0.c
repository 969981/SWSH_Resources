/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009dfcb0; name: FUN_009dfcb0
 */


void FUN_009dfcb0(long *param_1,undefined8 *param_2,undefined8 param_3,uint param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined1 local_40 [4];
  uint local_3c;
  undefined1 auStack_38 [8];
  
  uVar1 = FUN_008efa90(*(undefined4 *)(param_2 + 0xd),*(undefined1 *)((long)param_2 + 0x6d));
  if (((uVar1 & 1) == 0) || (param_5 != 0)) {
    *param_1 = 0;
  }
  else {
    local_40[0] = 1;
    local_3c = param_4;
    local_48 = FUN_009dee50(param_2[0xc],0,param_4,*param_2);
    local_4c[0] = 0;
    lVar2 = FUN_009dfda0(auStack_38,*param_2,param_2 + 0x11,param_2 + 0x13,&local_48,
                         param_2 + (ulong)param_4 + 0x15,param_2 + (ulong)param_4 + 0x1a,
                         (long)param_2 + 0x6c,&local_3c,local_40,param_2 + 0xe,local_4c,
                         param_2 + 0x10,param_2,param_2 + (ulong)param_4 + 2,
                         param_2 + (ulong)param_4 + 7,param_2 + 1);
    *param_1 = lVar2;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
  }
  return;
}


