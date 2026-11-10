/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcaea0; name: FUN_00dcaea0
 */


undefined4 FUN_00dcaea0(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint __c;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  ulong local_e8;
  byte local_e0 [128];
  char acStack_60 [64];
  
  pcVar3 = strstr(param_1,"/a_");
  if (pcVar3 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    __c = (uint)(byte)pcVar3[1];
    pcVar7 = acStack_60;
    if (pcVar3[1] != 0x2f) {
      pbVar4 = (byte *)(pcVar3 + 2);
      pcVar3 = pcVar7;
      do {
        iVar1 = toupper(__c);
        pcVar7 = pcVar3 + 1;
        *pcVar3 = (char)iVar1;
        __c = (uint)*pbVar4;
        pbVar4 = pbVar4 + 1;
        pcVar3 = pcVar7;
      } while (__c != 0x2f);
    }
    *pcVar7 = '\0';
    uVar5 = 0xcbf29ce484222645;
    snprintf((char *)local_e0,0x80,"SYS_WORK_%s_REPLACE",acStack_60);
    if (local_e0[0] != 0) {
      pbVar4 = (byte *)((ulong)local_e0 | 1);
      do {
        uVar5 = (uVar5 ^ local_e0[0]) * 0x100000001b3;
        local_e0[0] = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (local_e0[0] != 0);
    }
    lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    local_e8 = uVar5;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    uVar5 = FUN_01511700(lVar6,&local_e8);
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_015114c0(lVar6,local_e8);
    }
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
  }
  return uVar2;
}


