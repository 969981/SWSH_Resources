/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047b010; name: FUN_0047b010
 */


void FUN_0047b010(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
  puVar4 = PTR_DAT_02712e28;
  if ((*(long *)(param_1 + 0x108) == 0) && (*(long *)(param_1 + 0x110) == 0)) {
    uVar1 = *(uint *)(param_1 + 0x3c);
    puVar5 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,0x18);
    if (puVar5 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0x2b00000000;
      *(undefined4 *)(puVar5 + 2) = 0;
      *(undefined8 **)(param_1 + 0x110) = puVar5;
      puVar3 = PTR_DAT_02712ac0;
      lVar6 = FUN_00404750(*(undefined4 *)puVar4,
                           (uVar1 & 0xff) * 2 * (uint)*(ushort *)PTR_DAT_02712ac0,0x10);
      if (lVar6 != 0) {
        plVar8 = *(long **)(param_1 + 0x110);
        uVar2 = *(undefined4 *)puVar3;
        *plVar8 = lVar6;
        *(short *)(plVar8 + 2) = (short)uVar2;
        *(undefined2 *)((long)plVar8 + 0x12) = 0;
        *(uint *)(plVar8 + 1) = uVar1;
        puVar5 = (undefined8 *)FUN_00457f50();
        uVar7 = (**(code **)*puVar5)(puVar5,param_2,*(undefined4 *)PTR_DAT_02712b38,0x10,1,uVar1);
        *(undefined8 *)(param_1 + 0x108) = uVar7;
      }
    }
  }
  return;
}


