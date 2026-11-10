/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005807f0; name: FUN_005807f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005807f0(undefined4 param_1,float param_2,float param_3,long param_4,long param_5,
                 ulong param_6,ulong param_7,undefined8 param_8,ulong param_9,undefined4 param_10)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_9 & 1) != 0) {
    (**(code **)(**(long **)(param_4 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_4 + 0x20) + 0x140))(*(long **)(param_4 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_4 + 0x20) + 0x150))(*(long **)(param_4 + 0x20),0);
  }
  uVar2 = *(uint *)(param_5 + 0x54);
  uVar3 = *(uint *)(param_5 + 0x58);
  iVar4 = FUN_0059d300(param_5,0,0,1,0,0);
  if (iVar4 < 0) {
    return;
  }
  FUN_0059d000(0,0);
  puVar1 = (undefined4 *)(param_4 + 0x299c4);
  if ((param_6 & 1) == 0) {
    puVar1 = (undefined4 *)(param_4 + 0x299c0);
  }
  (**(code **)(**(long **)(param_4 + 0x30) + 0xe8))(*(long **)(param_4 + 0x30),*puVar1);
  DAT_02760c30._0_4_ = powf(10.0,param_3 + 1.0);
  DAT_02760c28._4_4_ = 0x4014d653;
  ram0x02760c34 = 0x4120000000000000;
  DAT_02760c18 = 0;
  if ((param_7 & 1) == 0) {
    DAT_02760c18 = 0xbf800000;
  }
  DAT_02760c44 = 0x40c0000000000000;
  DAT_02760c4c = 0x40c0000040c00000;
  DAT_02760c54 = 0x3f8000003f800000;
  DAT_02760c5c = 0x3f8000003f800000;
  DAT_02760c64 = 0x3f8000003f800000;
  DAT_02760c6c = 0x3f8000003f800000;
  DAT_02760c74 = 0x3f8000003f800000;
  DAT_02760c7c = 0;
  DAT_02760c84 = 0x3f8000003f800000;
  DAT_02760c8c = 0x3f800000;
  DAT_02760c94 = 0x3f800000;
  DAT_02760c9c = 0x3f800000;
  DAT_02760ca4 = 0x3f800000;
  DAT_02760cac = 0x3f8000003f800000;
  DAT_02760cb4 = 0x3f800000;
  DAT_02760cbc = 0x3f80000000000000;
  DAT_02760cc4 = 0x3f8000003f800000;
  DAT_02760ccc = 0x3f80000000000000;
  DAT_02760cd4 = 0x3f800000;
  DAT_02760c1c = 1.0 / param_2;
  DAT_02760c20 = param_1;
  DAT_02760c28._0_4_ = param_2;
  DAT_02760c3c = param_2;
  DAT_02760c40 = param_3;
  (**(code **)(**(long **)(param_4 + 0x30) + 0xb0))
            (*(long **)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x100),&DAT_02760c18,0xc);
  (**(code **)(**(long **)(param_4 + 0x30) + 0xc0))
            (*(long **)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x13c),param_8);
  FUN_00571d00(0,0,(float)uVar2,(float)uVar3,0,0,0x3f800000,0x3f800000,param_4,param_10);
  return;
}


