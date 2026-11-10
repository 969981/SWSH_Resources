/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01017d70; name: FUN_01017d70
 */


void FUN_01017d70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  *param_2 = *param_3;
  param_2[2] = *param_4;
  puVar3 = PTR_DAT_02710a48;
  param_2[4] = PTR_DAT_02710a48 + 0x10;
  lVar6 = param_4[3];
  param_2[5] = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  if ((code *)param_4[6] != (code *)0x0) {
    (*(code *)param_4[6])(param_4 + 8,param_2 + 10);
    uVar7 = param_4[4];
    uVar1 = param_4[5];
    uVar2 = param_4[7];
    param_2[8] = param_4[6];
    param_2[9] = uVar2;
    param_2[6] = uVar7;
    param_2[7] = uVar1;
  }
  param_2[0x16] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x17] = 0;
  if ((code *)param_4[0x16] != (code *)0x0) {
    (*(code *)param_4[0x16])(param_4 + 0x18,param_2 + 0x1a);
    uVar7 = param_4[0x14];
    uVar1 = param_4[0x15];
    uVar2 = param_4[0x17];
    param_2[0x18] = param_4[0x16];
    param_2[0x19] = uVar2;
    param_2[0x16] = uVar7;
    param_2[0x17] = uVar1;
  }
  puVar4 = PTR_DAT_02710ac8;
  param_2[4] = PTR_DAT_02710ac8 + 0x10;
  param_2[0x26] = puVar3 + 0x10;
  lVar6 = param_4[0x25];
  param_2[0x27] = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  if ((code *)param_4[0x28] != (code *)0x0) {
    (*(code *)param_4[0x28])(param_4 + 0x2a,param_2 + 0x2c);
    uVar7 = param_4[0x26];
    uVar1 = param_4[0x27];
    uVar2 = param_4[0x29];
    param_2[0x2a] = param_4[0x28];
    param_2[0x2b] = uVar2;
    param_2[0x28] = uVar7;
    param_2[0x29] = uVar1;
  }
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  if ((code *)param_4[0x38] != (code *)0x0) {
    (*(code *)param_4[0x38])(param_4 + 0x3a,param_2 + 0x3c);
    uVar7 = param_4[0x36];
    uVar1 = param_4[0x37];
    uVar2 = param_4[0x39];
    param_2[0x3a] = param_4[0x38];
    param_2[0x3b] = uVar2;
    param_2[0x38] = uVar7;
    param_2[0x39] = uVar1;
  }
  param_2[0x26] = puVar4 + 0x10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return;
}


