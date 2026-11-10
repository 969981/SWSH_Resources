/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ed800; name: FUN_008ed800
 */


void FUN_008ed800(uint *param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  if (9 < uVar1) {
    return;
  }
  uVar2 = 1 << (ulong)(uVar1 & 0x1f);
  if ((uVar2 & 0x8c) == 0) {
    if ((uVar2 & 0x240) == 0) {
      if (uVar1 != 4) {
        return;
      }
      uVar4 = (ulong)*(byte *)(param_2 + 5);
      if (4 < uVar4) {
        return;
      }
      cVar3 = (char)param_1[1];
      if (*(byte *)(param_2 + 5) == 0) {
        uVar4 = 0;
      }
      else {
        uVar5 = 0;
        do {
          if (*(char *)(param_2 + uVar5) == cVar3) {
            return;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
      }
    }
    else {
      uVar4 = (ulong)*(byte *)(param_2 + 5);
      if (4 < uVar4) {
        return;
      }
      if (*(byte *)(param_2 + 5) == 0) {
        uVar4 = 0;
      }
      else {
        uVar5 = 0;
        do {
          if (*(char *)(param_2 + uVar5) == '\0') goto LAB_008ed90c;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
      }
      *(undefined1 *)(param_2 + uVar4) = 0;
      uVar1 = *(byte *)(param_2 + 5) + 1;
      uVar4 = (ulong)uVar1;
      *(char *)(param_2 + 5) = (char)uVar1;
LAB_008ed90c:
      if (4 < ((uint)uVar4 & 0xff)) {
        return;
      }
      if ((uVar4 & 0xff) == 0) {
        uVar4 = 0;
      }
      else {
        uVar5 = 0;
        uVar4 = uVar4 & 0xff;
        do {
          if (*(char *)(param_2 + uVar5) == '\x01') {
            return;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar4);
      }
      cVar3 = '\x01';
    }
    *(char *)(param_2 + uVar4) = cVar3;
  }
  else {
    cVar3 = FUN_008ee700(0,param_3,(char)param_1[1],0);
    uVar4 = (ulong)*(byte *)(param_2 + 5);
    if (4 < uVar4) {
      return;
    }
    if (*(byte *)(param_2 + 5) == 0) {
      uVar4 = 0;
    }
    else {
      uVar5 = 0;
      do {
        if (*(char *)(param_2 + uVar5) == cVar3) {
          return;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    *(char *)(param_2 + uVar4) = cVar3;
  }
  *(char *)(param_2 + 5) = *(char *)(param_2 + 5) + '\x01';
  return;
}


