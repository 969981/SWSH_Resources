/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005279b0; name: FUN_005279b0
 */


undefined8 * FUN_005279b0(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x0;
  if ((param_2 != (undefined8 *)0x0) && (param_3 < 0xe)) {
    if ((DAT_0275cc3a & 1) == 0) {
      DAT_0275cc3a = 1;
      DAT_0275cdf0 = 0x100000000;
      DAT_0275cdf8 = 0x300000002;
      DAT_0275ce00 = 0x500000004;
      DAT_0275ce08 = 0x700000006;
      DAT_0275ce10 = 0x900000008;
      DAT_0275ce18 = 0xb0000000a;
      DAT_0275ce20 = 0xd0000000c;
    }
    lVar2 = *(long *)PTR_DAT_02713a78 +
            (ulong)*(uint *)((long)&DAT_0275cdf0 + (long)(int)param_3 * 4) * 0xa8;
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    *param_2 = *(undefined8 *)(lVar2 + 8);
    param_2[1] = uVar3;
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    param_2[2] = *(undefined8 *)(lVar2 + 0x18);
    param_2[3] = uVar3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar2 + 0x28);
    *(undefined4 *)((long)param_2 + 0x24) = *(undefined4 *)(lVar2 + 0x2c);
    uVar3 = *(undefined8 *)(lVar2 + 0x38);
    param_2[5] = *(undefined8 *)(lVar2 + 0x30);
    param_2[6] = uVar3;
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(lVar2 + 0x40);
    *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(lVar2 + 0x44);
    *(undefined1 *)(param_2 + 8) = *(undefined1 *)(lVar2 + 0x48);
    uVar3 = *(undefined8 *)(lVar2 + 0x4c);
    *(undefined8 *)((long)param_2 + 0x4c) = *(undefined8 *)(lVar2 + 0x54);
    *(undefined8 *)((long)param_2 + 0x44) = uVar3;
    *(undefined4 *)((long)param_2 + 0x54) = *(undefined4 *)(lVar2 + 0x88);
    *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)(lVar2 + 0x90);
    *(undefined4 *)((long)param_2 + 0x5c) = *(undefined4 *)(lVar2 + 0x94);
    *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(lVar2 + 0x98);
    *(undefined4 *)((long)param_2 + 100) = *(undefined4 *)(lVar2 + 0x5c);
    *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)(lVar2 + 0x60);
    *(undefined1 *)((long)param_2 + 0x6c) = *(undefined1 *)(lVar2 + 100);
    uVar3 = *(undefined8 *)(lVar2 + 0x74);
    param_2[0xe] = *(undefined8 *)(lVar2 + 0x6c);
    param_2[0xf] = uVar3;
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar2 + 0x68);
    puVar1 = param_2;
  }
  return puVar1;
}


