/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014521f0; name: FUN_014521f0
 */


void FUN_014521f0(long param_1,int param_2,int param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong local_78;
  byte *pbStack_70;
  undefined8 local_68;
  undefined1 auStack_60 [20];
  byte local_4c [12];
  undefined1 auStack_40 [16];
  
  uVar2 = 0xcbf29ce484222645;
  FUN_012b4190(auStack_40,param_1 + 0x120,(long)param_2);
  snprintf((char *)local_4c,10,"exp_%dh",param_3);
  if (local_4c[0] != 0) {
    pbVar1 = (byte *)((ulong)local_4c | 1);
    do {
      uVar2 = (uVar2 ^ local_4c[0]) * 0x100000001b3;
      local_4c[0] = *pbVar1;
      pbVar1 = pbVar1 + 1;
    } while (local_4c[0] != 0);
  }
  local_68 = 9;
  local_78 = uVar2;
  pbStack_70 = local_4c;
  FUN_012b4250(auStack_60,auStack_40,&local_78);
  FUN_012b4420(auStack_60,0);
  return;
}


