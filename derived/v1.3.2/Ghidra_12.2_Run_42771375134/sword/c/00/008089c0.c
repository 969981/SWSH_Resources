/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008089c0; name: FUN_008089c0
 */


undefined8 FUN_008089c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  do {
    while( true ) {
      uStack_70 = 0;
      local_68 = 0;
      local_78 = 0x3e02;
      bVar3 = *(byte *)(param_1 + 0x30);
      uVar6 = (ulong)(bVar3 >> 1);
      uVar4 = uVar6;
      if ((bVar3 & 1) != 0) {
        uVar4 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar4 == 1) break;
      uStack_88 = 0;
      local_80 = 0;
      local_90 = 0x7d02;
      uVar4 = FUN_008055c0(param_1,param_2);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    }
    if ((bVar3 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '>') {
        lVar9 = -uVar6;
        pcVar7 = (char *)((ulong)&local_78 | 2);
        pcVar8 = (char *)(param_1 + 0x32);
        do {
          lVar9 = lVar9 + 1;
          if (lVar9 == 0) goto LAB_00808b40;
          cVar1 = *pcVar7;
          cVar2 = *pcVar8;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 == cVar1);
      }
    }
    else if (**(char **)(param_1 + 0x40) == '>') goto LAB_00808b40;
    uStack_88 = 0;
    local_80 = 0;
    local_90 = 0x7d02;
    if ((bVar3 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '}') {
        lVar9 = -uVar6;
        pcVar7 = (char *)((ulong)&local_90 | 2);
        pcVar8 = (char *)(param_1 + 0x32);
        do {
          lVar9 = lVar9 + 1;
          if (lVar9 == 0) goto LAB_00808b40;
          cVar1 = *pcVar7;
          cVar2 = *pcVar8;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 == cVar1);
      }
    }
    else if (**(char **)(param_1 + 0x40) == '}') {
LAB_00808b40:
      uVar5 = FUN_00806c70(param_1,param_3);
      return uVar5;
    }
    uVar4 = FUN_008055c0(param_1,param_2);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  } while( true );
}


