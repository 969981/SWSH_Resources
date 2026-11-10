/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ad960; name: FUN_008ad960
 */


void FUN_008ad960(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined6 uStack_70;
  undefined2 local_6a;
  undefined6 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar7)(puVar7);
  lVar4 = FUN_00897d00();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  lVar8 = puVar7[0xb];
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar7)(puVar7);
  lVar4 = FUN_00897d00();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  cVar1 = *(char *)(puVar7[0xb] + 0x2b);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_6a = 0;
  FUN_014b4620(&uStack_70,*(undefined8 *)PTR_DAT_02710848,0,0);
  plVar3 = *(long **)(lVar8 + 0x10);
  uVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(lVar8 + 0x1c));
  uVar2 = FUN_008c8330(*(undefined8 *)(param_1 + 0x88));
  uVar6 = FUN_0087db00(uVar5,&uStack_70,uVar2,auStack_34,auStack_38);
  if ((uVar6 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x80) = 0;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      lVar4 = FUN_00897d00();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar7 = puVar7 + -10;
          goto LAB_008adab4;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
LAB_008adab4:
    FUN_008a6b70(puVar7,0xcf39f8ca2348b32d,cVar1 != '\0',0);
  }
  else {
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  FUN_008c82b0(*(undefined8 *)(param_1 + 0x88),0);
  return;
}


