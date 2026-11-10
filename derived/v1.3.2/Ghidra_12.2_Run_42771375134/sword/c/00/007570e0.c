/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007570e0; name: FUN_007570e0
 */


void FUN_007570e0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar5 = PTR_DAT_02710860;
  if (param_2 != param_3) {
    puVar9 = *(undefined8 **)(param_1 + 8);
    puVar1 = PTR_DAT_02715af8 + 0x10;
    param_2 = param_2 + 0x160;
    puVar2 = PTR_DAT_02715b00 + 0x10;
    do {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar9 = *(undefined8 *)(param_2 + -0x160);
      puVar9[1] = *(undefined8 *)(param_2 + -0x158);
      puVar9[2] = *(undefined8 *)(param_2 + -0x150);
      lVar7 = *(long *)(param_2 + -0x148);
      puVar9[3] = lVar7;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      puVar9[4] = *(undefined8 *)(param_2 + -0x140);
      puVar9[5] = *(undefined8 *)(param_2 + -0x138);
      puVar9[6] = *(undefined8 *)(param_2 + -0x130);
      lVar7 = *(long *)(param_2 + -0x128);
      puVar9[7] = lVar7;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      puVar9[9] = *(undefined8 *)(param_2 + -0x118);
      puVar9[8] = *(undefined8 *)(param_2 + -0x120);
      puVar9[0xb] = *(undefined8 *)(param_2 + -0x108);
      puVar9[10] = *(undefined8 *)(param_2 + -0x110);
      puVar9[0xd] = *(undefined8 *)(param_2 + -0xf8);
      puVar9[0xc] = *(undefined8 *)(param_2 + -0x100);
      puVar9[0xf] = *(undefined8 *)(param_2 + -0xe8);
      puVar9[0xe] = *(undefined8 *)(param_2 + -0xf0);
      FUN_00754a00(puVar9 + 0x10,param_2 + -0xe0);
      puVar9[0x16] = puVar1;
      lVar7 = *(long *)(param_2 + -0xa8);
      puVar9[0x17] = lVar7;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      puVar9[0x18] = 0;
      puVar9[0x1a] = 0;
      puVar9[0x1b] = 0;
      puVar9[0x19] = 0;
      if (*(code **)(param_2 + -0x90) != (code *)0x0) {
        (**(code **)(param_2 + -0x90))(param_2 + -0x80,puVar9 + 0x1c);
        uVar8 = *(undefined8 *)(param_2 + -0xa0);
        uVar3 = *(undefined8 *)(param_2 + -0x98);
        uVar4 = *(undefined8 *)(param_2 + -0x88);
        puVar9[0x1a] = *(undefined8 *)(param_2 + -0x90);
        puVar9[0x1b] = uVar4;
        puVar9[0x18] = uVar8;
        puVar9[0x19] = uVar3;
      }
      puVar9[0x2a] = 0;
      puVar9[0x2b] = 0;
      puVar9[0x28] = 0;
      puVar9[0x29] = 0;
      if (*(code **)(param_2 + -0x10) != (code *)0x0) {
        (**(code **)(param_2 + -0x10))(param_2,puVar9 + 0x2c);
        uVar8 = *(undefined8 *)(param_2 + -0x20);
        uVar3 = *(undefined8 *)(param_2 + -0x18);
        uVar4 = *(undefined8 *)(param_2 + -8);
        puVar9[0x2a] = *(undefined8 *)(param_2 + -0x10);
        puVar9[0x2b] = uVar4;
        puVar9[0x28] = uVar8;
        puVar9[0x29] = uVar3;
      }
      puVar9[0x16] = puVar2;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 8) + 0x1c0);
      lVar6 = param_2 + 0x60;
      param_2 = param_2 + 0x1c0;
      *(undefined8 **)(param_1 + 8) = puVar9;
    } while (lVar6 != param_3);
  }
  return;
}


