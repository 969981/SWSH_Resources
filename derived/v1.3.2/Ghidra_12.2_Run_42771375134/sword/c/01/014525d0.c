/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014525d0; name: FUN_014525d0
 */


int FUN_014525d0(long param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong local_68;
  byte *pbStack_60;
  undefined8 local_58;
  undefined1 auStack_50 [20];
  byte local_3c [12];
  undefined1 auStack_30 [16];
  
  uVar4 = 0xcbf29ce484222645;
  FUN_012b4190(auStack_30,param_1 + 0x120,(long)param_2);
  snprintf((char *)local_3c,10,"type%d",param_3 + 1);
  if (local_3c[0] != 0) {
    pbVar3 = (byte *)((ulong)local_3c | 1);
    do {
      uVar4 = (uVar4 ^ local_3c[0]) * 0x100000001b3;
      local_3c[0] = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (local_3c[0] != 0);
  }
  local_58 = 9;
  local_68 = uVar4;
  pbStack_60 = local_3c;
  FUN_012b4250(auStack_50,auStack_30,&local_68);
  uVar2 = FUN_012b4420(auStack_50,0);
  iVar1 = 0x12;
  if ((uVar2 & 0xff) != 0) {
    iVar1 = uVar2 - 1;
  }
  return iVar1;
}


