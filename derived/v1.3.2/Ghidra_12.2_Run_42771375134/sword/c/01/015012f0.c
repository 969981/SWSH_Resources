/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015012f0; name: FUN_015012f0
 */


undefined8 FUN_015012f0(long param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_2 < 2) {
    pcVar5 = (char *)(param_1 + (ulong)param_2 * 0x2b8 + 0x60);
    uVar4 = (ulong)param_2;
    if (*pcVar5 == '\0') {
      lVar3 = 0;
      pcVar6 = pcVar5;
    }
    else {
      lVar2 = param_1 + uVar4 * 0x2b8;
      if (*(char *)(lVar2 + 0x1a9) != '\0') goto LAB_01501334;
      lVar3 = 1;
      pcVar6 = (char *)(lVar2 + 0x1a9);
    }
    lVar2 = param_1 + uVar4 * 0x2b8;
    thunk_FUN_008787a0(param_3,lVar2 + lVar3 * 0x149 + 0x61);
    uVar1 = 1;
    *pcVar6 = '\x01';
    if ((char)(*(char *)(lVar2 + 0x1a9) + *pcVar5) == '\x02') {
      uVar1 = 1;
      *(undefined4 *)(param_1 + uVar4 * 0x2b8 + 0x2f4) = 0;
    }
  }
  else {
LAB_01501334:
    uVar1 = 0;
  }
  return uVar1;
}


