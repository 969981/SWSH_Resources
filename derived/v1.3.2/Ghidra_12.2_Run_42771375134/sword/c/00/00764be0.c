/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00764be0; name: FUN_00764be0
 */


undefined8 FUN_00764be0(undefined8 param_1,char *param_2,undefined4 *param_3)

{
  char *pcVar1;
  string sVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  undefined4 uVar8;
  ulong uVar9;
  size_t sVar10;
  size_t sVar11;
  long lVar12;
  char *pcVar13;
  char *__s1;
  void *__dest;
  void *pvVar14;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  string local_70 [8];
  ulong local_68;
  char *local_60;
  ulong local_58;
  size_t local_50;
  void *local_48;
  
  if (param_2 == (char *)0x0) {
    return 0x100b;
  }
  if (param_3 == (undefined4 *)0x0) {
    return 0x100b;
  }
  local_58 = 0;
  local_50 = 0;
  local_48 = (void *)0x0;
  sVar7 = strlen(param_2);
  if (0xffffffffffffffef < sVar7) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar7 < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)sVar7 << 1));
    __dest = (void *)((ulong)&local_58 | 1);
    pvVar14 = __dest;
    if (sVar7 != 0) goto LAB_00764c74;
  }
  else {
    uVar9 = sVar7 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar9);
    local_58 = uVar9 | 1;
    pvVar14 = (void *)((ulong)&local_58 | 1);
    local_50 = sVar7;
    local_48 = __dest;
LAB_00764c74:
    memcpy(__dest,param_2,sVar7);
  }
  *(undefined1 *)((long)__dest + sVar7) = 0;
  sVar7 = local_58 >> 1 & 0x7f;
  if ((local_58 & 1) != 0) {
    sVar7 = local_50;
    pvVar14 = local_48;
  }
  if ((long)sVar7 < 1) {
LAB_00764cd0:
    lVar12 = (long)pvVar14 + sVar7;
  }
  else {
    sVar10 = sVar7;
    do {
      if (sVar10 == 0) goto LAB_00764cd0;
      sVar11 = sVar10 - 1;
      lVar12 = sVar10 - 1;
      sVar10 = sVar11;
    } while (*(char *)((long)pvVar14 + lVar12) != '.');
    lVar12 = (long)pvVar14 + sVar11;
  }
  uVar9 = lVar12 - (long)pvVar14;
  if (lVar12 == (long)pvVar14 + sVar7) {
    uVar9 = 0xffffffffffffffff;
  }
  std::string::string(local_70,(string *)&local_58,uVar9,sVar7 - uVar9,(allocator *)&local_58);
  bVar4 = ((byte)local_70[0] & 1) == 0;
  __s1 = (char *)((ulong)local_70 | 1);
  pcVar1 = __s1;
  if (!bVar4) {
    pcVar1 = local_60;
  }
  pcVar13 = local_60;
  sVar2 = local_70[0];
  if (*pcVar1 != '\0') {
    lVar12 = 0;
    do {
      pcVar1 = __s1;
      if (!bVar4) {
        pcVar1 = local_60;
      }
      iVar5 = tolower((uint)(byte)pcVar1[lVar12]);
      pcVar1[lVar12] = (char)iVar5;
      bVar4 = ((byte)local_70[0] & 1) == 0;
      pcVar1 = __s1;
      if (!bVar4) {
        pcVar1 = local_60;
      }
      lVar3 = lVar12 + 1;
      pcVar13 = local_60;
      lVar12 = lVar12 + 1;
      sVar2 = local_70[0];
    } while (pcVar1[lVar3] != '\0');
  }
  uStack_80 = 0;
  uVar9 = (ulong)((byte)sVar2 >> 1);
  if (((byte)sVar2 & 1) != 0) {
    uVar9 = local_68;
  }
  sVar7 = 4;
  if (uVar9 < 5) {
    sVar7 = uVar9;
  }
  local_78 = 0;
  local_88 = 0x34706d2e08;
  if (sVar7 == 0) {
    if (uVar9 < 4) goto LAB_00764dd0;
LAB_00764dbc:
    if (4 < uVar9) goto LAB_00764dd0;
LAB_00764e20:
    *param_3 = 1;
    goto joined_r0x00764f38;
  }
  pcVar1 = __s1;
  if (((byte)sVar2 & 1) != 0) {
    pcVar1 = pcVar13;
  }
  iVar5 = memcmp(pcVar1,(void *)((ulong)&local_88 | 1),sVar7);
  if ((iVar5 == 0) && (3 < uVar9)) goto LAB_00764dbc;
LAB_00764dd0:
  uStack_80 = 0;
  local_78 = 0;
  local_88 = 0x61346d2e08;
  if (sVar7 == 0) {
joined_r0x00764e64:
    if ((3 < uVar9) && (uVar9 < 5)) goto LAB_00764e20;
  }
  else {
    pcVar1 = __s1;
    if (((byte)sVar2 & 1) != 0) {
      pcVar1 = pcVar13;
    }
    iVar5 = memcmp(pcVar1,(void *)((ulong)&local_88 | 1),sVar7);
    if (iVar5 == 0) goto joined_r0x00764e64;
  }
  uStack_80 = 0;
  local_78 = 0;
  local_88 = 0x766b6d2e08;
  if (sVar7 == 0) {
joined_r0x00764ecc:
    if ((3 < uVar9) && (uVar9 < 5)) {
      *param_3 = 2;
      goto joined_r0x00764f38;
    }
  }
  else {
    pcVar1 = __s1;
    if (((byte)sVar2 & 1) != 0) {
      pcVar1 = pcVar13;
    }
    iVar5 = memcmp(pcVar1,(void *)((ulong)&local_88 | 1),sVar7);
    if (iVar5 == 0) goto joined_r0x00764ecc;
  }
  uStack_80 = 0;
  sVar7 = 5;
  if (uVar9 < 6) {
    sVar7 = uVar9;
  }
  local_78 = 0;
  local_88 = 0x6d6265772e0a;
  if (sVar7 == 0) {
LAB_00764f1c:
    uVar6 = (uint)(5 < uVar9);
    if (uVar9 < 5) {
      uVar6 = 0xffffffff;
    }
  }
  else {
    if (((byte)sVar2 & 1) != 0) {
      __s1 = pcVar13;
    }
    uVar6 = memcmp(__s1,(void *)((ulong)&local_88 | 1),sVar7);
    if (uVar6 == 0) goto LAB_00764f1c;
  }
  uVar8 = 3;
  if (uVar6 != 0) {
    uVar8 = 0;
  }
  *param_3 = uVar8;
joined_r0x00764f38:
  if (((byte)sVar2 & 1) != 0) {
    operator_delete(pcVar13);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  return 0;
}


