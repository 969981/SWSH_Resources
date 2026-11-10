/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00807930; name: FUN_00807930
 */


uint FUN_00807930(long param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68 [2];
  void *local_58;
  
  local_58 = (void *)0x0;
  local_68[0] = 0;
  local_68[1] = 0;
  uVar6 = FUN_008088a0(param_1,local_68);
  if ((uVar6 & 1) != 0) {
    do {
      while( true ) {
        uStack_78 = 0;
        local_70 = 0;
        local_80 = 0x3e02;
        bVar3 = *(byte *)(param_1 + 0x30);
        uVar7 = (ulong)(bVar3 >> 1);
        uVar6 = uVar7;
        if ((bVar3 & 1) != 0) {
          uVar6 = *(ulong *)(param_1 + 0x38);
        }
        if (uVar6 != 1) break;
        if ((bVar3 & 1) != 0) {
          if (**(char **)(param_1 + 0x40) != '>') goto LAB_00807a18;
LAB_00807abc:
          uVar5 = FUN_00806c70(param_1,local_68);
          uVar4 = uVar5;
          if ((local_68[0] & 1) == 0) goto LAB_00807a9c;
          goto LAB_00807a94;
        }
        if (*(char *)(param_1 + 0x31) == '>') {
          lVar10 = -uVar7;
          pcVar8 = (char *)((ulong)&local_80 | 2);
          pcVar9 = (char *)(param_1 + 0x32);
          do {
            lVar10 = lVar10 + 1;
            if (lVar10 == 0) goto LAB_00807abc;
            cVar1 = *pcVar8;
            cVar2 = *pcVar9;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 == cVar1);
        }
LAB_00807a18:
        uStack_90 = 0;
        local_88 = 0;
        local_98 = 0x7d02;
        if ((bVar3 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '}') {
            lVar10 = -uVar7;
            pcVar8 = (char *)((ulong)&local_98 | 2);
            pcVar9 = (char *)(param_1 + 0x32);
            do {
              lVar10 = lVar10 + 1;
              if (lVar10 == 0) goto LAB_00807abc;
              cVar1 = *pcVar8;
              cVar2 = *pcVar9;
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar2 == cVar1);
          }
        }
        else if (**(char **)(param_1 + 0x40) == '}') goto LAB_00807abc;
        uVar6 = FUN_00808b70(param_1);
        if ((uVar6 & 1) == 0) goto LAB_00807a88;
      }
      uStack_90 = 0;
      local_88 = 0;
      local_98 = 0x7d02;
      uVar6 = FUN_00808b70(param_1);
    } while ((uVar6 & 1) != 0);
  }
LAB_00807a88:
  uVar5 = 0;
  uVar4 = 0;
  if ((local_68[0] & 1) != 0) {
LAB_00807a94:
    uVar5 = uVar4;
    operator_delete(local_58);
  }
LAB_00807a9c:
  return uVar5 & 1;
}


