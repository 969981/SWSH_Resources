/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00806c70; name: FUN_00806c70
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00806c70(long param_1,string *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  string sVar3;
  ulong uVar4;
  int iVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lVar8;
  string *psVar9;
  void *__s1;
  string *__s2;
  byte local_90 [16];
  void *local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  ulong local_60;
  ulong local_58;
  void *local_50;
  ulong local_48;
  ulong local_40;
  void *local_38;
  
  bVar2 = *(byte *)(param_1 + 0x30);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x38);
  }
  sVar3 = *param_2;
  sVar1 = (ulong)((byte)sVar3 >> 1);
  if (((byte)sVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 8);
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x40);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x31);
    }
    __s2 = *(string **)(param_2 + 0x10);
    psVar9 = (string *)(param_1 + 0x31);
    if (((byte)sVar3 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar8 = -(ulong)(bVar2 >> 1);
        do {
          if (*psVar9 != *__s2) goto LAB_00806d14;
          psVar9 = psVar9 + 1;
          __s2 = __s2 + 1;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00806d14;
    FUN_00842de0(param_1 + 0x28);
    uVar7 = 1;
  }
  else {
LAB_00806d14:
    std::operator+("Expected \"",param_2);
    puVar6 = (ulong *)std::string::append((char *)local_90);
    local_78 = *puVar6;
    local_70 = puVar6[1];
    local_68 = (void *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    uVar4 = param_1 + 0x31;
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      uVar4 = *(ulong *)(param_1 + 0x40);
    }
    puVar6 = (ulong *)std::string::append((char *)&local_78,uVar4);
    local_60 = *puVar6;
    local_58 = puVar6[1];
    local_50 = (void *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    puVar6 = (ulong *)std::string::append((char *)&local_60);
    local_48 = *puVar6;
    local_40 = puVar6[1];
    local_38 = (void *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    FUN_00802750(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_48);
    if ((local_48 & 1) != 0) {
      operator_delete(local_38);
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    uVar7 = 0;
  }
  return uVar7;
}


