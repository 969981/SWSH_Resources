/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b9dd0; name: FUN_010b9dd0
 */


void FUN_010b9dd0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar2 & 1) != 0) {
    iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0xa8));
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x7c) = 1;
      FUN_01038270(*(undefined8 *)(param_1 + 0xa8),1);
      FUN_010bc6f0(param_1,1,1);
      *(undefined4 *)(param_1 + 0x80) = 0;
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
      FUN_00ffa160(*(undefined8 *)(param_1 + 0x88),1,1);
      FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),1,1);
      lVar5 = *(long *)(param_1 + 0x88);
      lVar6 = *(long *)PTR_DAT_027108d8;
      FUN_016b2d70(*(undefined8 *)(lVar5 + 0x5e0),*(int *)(lVar6 + 0x11aec) != 0);
      FUN_016b2d70(*(undefined8 *)(lVar5 + 0x5e8),*(int *)(lVar6 + 0x11aec) != 0);
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      plVar3 = (long *)(**(code **)*puVar4)(puVar4);
      lVar5 = FUN_010aad10();
      for (; plVar3 != (long *)lVar5; plVar3 = (long *)*plVar3) {
      }
      *(undefined8 *)(puVar4[2] + 0x18) = 0xffffffffffffffff;
    }
    else if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0xe;
      FUN_010bc320(param_1,0x1efd4ea03dcc0c9e,0,1,0,0);
      return;
    }
  }
  return;
}


