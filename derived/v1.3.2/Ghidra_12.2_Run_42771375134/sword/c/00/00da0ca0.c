/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da0ca0; name: FUN_00da0ca0
 */


void FUN_00da0ca0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  *param_2 = *param_3;
  param_2[2] = PTR_DAT_0271e730 + 0x10;
  puVar1 = PTR_DAT_02710a48 + 0x10;
  param_2[3] = *(undefined8 *)(param_4 + 8);
  param_2[4] = puVar1;
  lVar5 = *(long *)(param_4 + 0x18);
  param_2[5] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  if (*(code **)(param_4 + 0x30) != (code *)0x0) {
    (**(code **)(param_4 + 0x30))(param_4 + 0x40,param_2 + 10);
    uVar6 = *(undefined8 *)(param_4 + 0x20);
    uVar2 = *(undefined8 *)(param_4 + 0x28);
    uVar3 = *(undefined8 *)(param_4 + 0x38);
    param_2[8] = *(undefined8 *)(param_4 + 0x30);
    param_2[9] = uVar3;
    param_2[6] = uVar6;
    param_2[7] = uVar2;
  }
  param_2[0x16] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x17] = 0;
  if (*(code **)(param_4 + 0xb0) != (code *)0x0) {
    (**(code **)(param_4 + 0xb0))(param_4 + 0xc0,param_2 + 0x1a);
    uVar6 = *(undefined8 *)(param_4 + 0xa0);
    uVar2 = *(undefined8 *)(param_4 + 0xa8);
    uVar3 = *(undefined8 *)(param_4 + 0xb8);
    param_2[0x18] = *(undefined8 *)(param_4 + 0xb0);
    param_2[0x19] = uVar3;
    param_2[0x16] = uVar6;
    param_2[0x17] = uVar2;
  }
  param_2[4] = PTR_DAT_027194a8 + 0x10;
  param_2[0x26] = *(undefined8 *)(param_4 + 0x120);
  lVar5 = *(long *)(param_4 + 0x128);
  param_2[0x27] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  if (*(code **)(param_4 + 0x140) != (code *)0x0) {
    (**(code **)(param_4 + 0x140))(param_4 + 0x150,param_2 + 0x2c);
    uVar6 = *(undefined8 *)(param_4 + 0x130);
    uVar2 = *(undefined8 *)(param_4 + 0x138);
    uVar3 = *(undefined8 *)(param_4 + 0x148);
    param_2[0x2a] = *(undefined8 *)(param_4 + 0x140);
    param_2[0x2b] = uVar3;
    param_2[0x28] = uVar6;
    param_2[0x29] = uVar2;
  }
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  return;
}


