/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b5080; name: FUN_008b5080
 */


void FUN_008b5080(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x80) + 0x810);
  if (uVar1 != 0xffffffff) {
    *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x810) = 0xffffffff;
    *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x5cc) = 0;
    if (uVar1 < 6) {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      plVar4 = (long *)(**(code **)*puVar7)(puVar7);
      lVar5 = FUN_00897d00();
      for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
      }
      plVar4 = *(long **)(puVar7[0xb] + 0x10);
      uVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(puVar7[0xb] + 0x1c));
      uVar2 = FUN_008783c0();
      if (uVar1 == (uVar2 & 0xffff)) {
        FUN_008a6b70(puVar7 + -10,0xcf39f8ca2348b32d,0,0);
        FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
        *(undefined8 *)(param_1 + 0x78) = 0;
        return;
      }
      uVar3 = FUN_008c8330(*(undefined8 *)(param_1 + 0x80));
      FUN_008a6e20(puVar7 + -10,uVar3,uVar6,1);
      FUN_0087df30(uVar6,uVar1,0);
      lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      FUN_015351d0(lVar5,uVar6,0);
      FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
      *(undefined4 *)(param_1 + 0x78) = 3;
      return;
    }
    if (uVar1 == 6) {
      FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
      *(undefined8 *)(param_1 + 0x78) = 9;
    }
  }
  return;
}


