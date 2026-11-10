/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f34720; name: FUN_00f34720
 */


/* WARNING: Removing unreachable block (ram,0x00f347a4) */

ulong FUN_00f34720(long param_1,long param_2)

{
  size_t sVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined1 auStack_270 [8];
  char *local_268;
  long local_258;
  undefined1 auStack_250 [8];
  char *local_248;
  long local_238;
  byte local_230 [512];
  
  uVar5 = 0xcbf29ce484222645;
  FUN_006cf0c0(auStack_250,param_1 + 0x20);
  FUN_006cf0c0(auStack_270,param_2 + 0x20);
  snprintf((char *)local_230,0x200,"%s:%s",local_248,local_268);
  sVar1 = strlen((char *)local_230);
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      pbVar2 = local_230;
    }
    else {
      lVar3 = (sVar1 & 1) - sVar1;
      pbVar4 = local_230;
      do {
        pbVar2 = pbVar4 + 2;
        uVar5 = ((uVar5 ^ *pbVar4) * 0x100000001b3 ^ (ulong)pbVar4[1]) * 0x100000001b3;
        lVar3 = lVar3 + 2;
        pbVar4 = pbVar2;
      } while (lVar3 != 0);
      if ((sVar1 & 1) == 0) goto LAB_00f347e8;
    }
    uVar5 = (uVar5 ^ *pbVar2) * 0x100000001b3;
  }
LAB_00f347e8:
  if (local_258 != 0) {
    (**(code **)(*(long *)(local_258 + 0x48) + 0x18))();
    local_258 = 0;
  }
  if (local_238 != 0) {
    (**(code **)(*(long *)(local_238 + 0x48) + 0x18))();
  }
  return uVar5;
}


