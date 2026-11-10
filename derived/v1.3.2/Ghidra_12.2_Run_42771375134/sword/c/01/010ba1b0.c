/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ba1b0; name: FUN_010ba1b0
 */


void FUN_010ba1b0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = FUN_010386c0(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    FUN_010bc6f0(param_1,1,1);
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),1,1);
    lVar4 = *(long *)(param_1 + 0x88);
    lVar5 = *(long *)PTR_DAT_027108d8;
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5e0),*(int *)(lVar5 + 0x11aec) != 0);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5e8),*(int *)(lVar5 + 0x11aec) != 0);
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar2 = (long *)(**(code **)*puVar3)(puVar3);
    lVar4 = FUN_010aad10();
    for (; plVar2 != (long *)lVar4; plVar2 = (long *)*plVar2) {
    }
    *(undefined8 *)(puVar3[2] + 0x18) = 0xffffffffffffffff;
  }
  return;
}


