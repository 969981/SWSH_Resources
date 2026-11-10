/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00843f30; name: FUN_00843f30
 */


ulong * FUN_00843f30(ulong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong local_58;
  ulong local_50;
  undefined1 *local_48;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar9 = (ulong)(bVar1 >> 1);
    uVar4 = 0x16;
    uVar5 = (ulong)bVar1;
  }
  else {
    uVar5 = *param_1;
    uVar9 = param_1[1];
    uVar4 = (uVar5 & 0xfffffffffffffffe) - 1;
  }
  uVar2 = (long)param_3 - (long)param_2;
  if (uVar2 == 0) {
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    puVar3 = (undefined1 *)((long)param_1 + 1);
    uVar7 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar7 = param_1[1];
    puVar3 = (undefined1 *)param_1[2];
  }
  if ((param_2 < puVar3) || (puVar3 + uVar7 <= param_2)) {
    if (uVar4 - uVar9 < uVar2) {
      std::string::__grow_by((ulong)param_1,uVar4,(uVar9 + uVar2) - uVar4,uVar9,uVar9,0);
      uVar5 = (ulong)(byte)*param_1;
    }
    if ((uVar5 & 1) == 0) {
      uVar5 = (long)param_1 + 1;
    }
    else {
      uVar5 = param_1[2];
    }
    if (param_2 == param_3) {
      *(undefined1 *)(uVar5 + uVar9) = 0;
      bVar1 = (byte)*param_1;
    }
    else {
      puVar3 = (undefined1 *)(uVar5 + uVar9);
      puVar6 = param_2;
      do {
        puVar8 = puVar6 + 1;
        *puVar3 = *puVar6;
        puVar3 = puVar3 + 1;
        puVar6 = puVar8;
      } while (param_3 != puVar8);
      param_3[uVar5 + (uVar9 - (long)param_2)] = 0;
      bVar1 = (byte)*param_1;
    }
    if ((bVar1 & 1) == 0) {
      *(char *)param_1 = ((char)uVar9 + (char)uVar2) * '\x02';
    }
    else {
      param_1[1] = uVar9 + uVar2;
    }
    return param_1;
  }
  local_50 = 0;
  local_48 = (undefined1 *)0x0;
  local_58 = 0;
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    local_58 = (ulong)(byte)((int)uVar2 << 1);
    puVar3 = (undefined1 *)((ulong)&local_58 | 1);
  }
  else {
    uVar5 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar3 = operator_new(uVar5);
    local_58 = uVar5 | 1;
    local_48 = puVar3;
    local_50 = uVar2;
  }
  if (param_2 != param_3) {
    puVar6 = puVar3;
    do {
      puVar8 = param_2 + 1;
      *puVar6 = *param_2;
      puVar6 = puVar6 + 1;
      param_2 = puVar8;
    } while (param_3 != puVar8);
    puVar3 = puVar3 + uVar2;
  }
  *puVar3 = 0;
  puVar3 = (undefined1 *)((ulong)&local_58 | 1);
  if ((local_58 & 1) != 0) {
    puVar3 = local_48;
  }
  std::string::append((char *)param_1,(ulong)puVar3);
  if ((local_58 & 1) == 0) {
    return param_1;
  }
  operator_delete(local_48);
  return param_1;
}


