/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00807170; name: FUN_00807170
 */


undefined8 FUN_00807170(long param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  ulong local_78 [2];
  void *local_68;
  
  uVar5 = FUN_00807310();
  if ((uVar5 & 1) == 0) {
LAB_008072e4:
    uVar6 = 0;
  }
  else {
    bVar4 = (*(byte *)(param_1 + 0x30) & 1) == 0;
    uVar7 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
    uVar5 = uVar7;
    if (!bVar4) {
      uVar5 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar5 == 1) {
      do {
        local_78[0] = 0x2e02;
        local_68 = (void *)0x0;
        local_78[1] = 0;
        if (bVar4) {
          if (*(char *)(param_1 + 0x31) != '.') break;
          lVar8 = -uVar7;
          pcVar9 = (char *)((ulong)local_78 | 2);
          pcVar10 = (char *)(param_1 + 0x32);
          while (lVar8 = lVar8 + 1, lVar8 != 0) {
            cVar1 = *pcVar9;
            cVar2 = *pcVar10;
            pcVar9 = pcVar9 + 1;
            pcVar10 = pcVar10 + 1;
            if (cVar2 != cVar1) goto LAB_008072cc;
          }
        }
        else if (**(char **)(param_1 + 0x40) != '.') break;
        FUN_00842de0(param_1 + 0x28);
        local_78[0] = 0;
        local_78[1] = 0;
        local_68 = (void *)0x0;
        uVar5 = FUN_00807310(param_1,local_78);
        if ((uVar5 & 1) == 0) {
          if ((local_78[0] & 1) != 0) {
            operator_delete(local_68);
          }
          goto LAB_008072e4;
        }
        std::string::append(param_2);
        pvVar3 = (void *)((ulong)local_78 | 1);
        if ((local_78[0] & 1) != 0) {
          pvVar3 = local_68;
        }
        std::string::append(param_2,(ulong)pvVar3);
        if ((local_78[0] & 1) != 0) {
          operator_delete(local_68);
        }
        bVar4 = (*(byte *)(param_1 + 0x30) & 1) == 0;
        uVar7 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
        uVar5 = uVar7;
        if (!bVar4) {
          uVar5 = *(ulong *)(param_1 + 0x38);
        }
      } while (uVar5 == 1);
    }
LAB_008072cc:
    uVar6 = 1;
  }
  return uVar6;
}


