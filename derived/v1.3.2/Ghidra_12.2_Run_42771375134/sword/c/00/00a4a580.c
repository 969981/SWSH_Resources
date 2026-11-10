/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a4a580; name: FUN_00a4a580
 */


void FUN_00a4a580(long param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar8)(puVar8);
  lVar4 = FUN_00a871c0();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  uVar9 = puVar8[0xcf];
  puVar10 = (ulong *)puVar8[0xd1];
  iVar1 = FUN_008e0a00(uVar9);
  uVar6 = (ulong)(uint)(iVar1 << 4) & 0x1f0 | *puVar10 & 0xffffffffdfffe000;
  *puVar10 = uVar6 | 0xa01;
  uVar5 = 0;
  switch(param_2) {
  case 1:
    break;
  case 2:
    uVar5 = 1;
    break;
  case 3:
    uVar5 = 2;
    break;
  case 4:
    uVar5 = 3;
    break;
  case 5:
    uVar6 = uVar6 | 0xa00;
    goto LAB_00a4a678;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar2 = FUN_008e2240(uVar9,uVar5);
  uVar6 = *puVar10;
  uVar7 = (ulong)((uVar2 & 0xffff) << 0xd);
  *puVar10 = uVar6 & 0xffffffffe0001fff | uVar7;
  uVar6 = uVar6 & 0xffffffff60001fff | uVar7 |
          (ulong)*(byte *)(*(long *)(param_1 + 0x80) + 0x61d) << 0x1f;
LAB_00a4a678:
  *puVar10 = uVar6;
  *(undefined1 *)((long)puVar8 + 0x691) = 1;
  return;
}


