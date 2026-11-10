/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e04680; name: FUN_00e04680
 */


void FUN_00e04680(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_80 [32];
  undefined8 local_60;
  undefined8 local_48;
  
  uVar3 = *param_3;
  local_48 = 0xcbf29ce484222645;
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar1 == plVar2) {
LAB_00e0471c:
      FUN_00e305f0(*(undefined8 *)(param_1 + 0x68),uVar3,&local_48);
      FUN_00e30ee0(*(undefined8 *)(param_1 + 0x68),param_2);
      return;
    }
    lVar5 = *plVar1;
    uVar4 = FUN_015b5320(lVar5 + 0x50);
    if (((uVar4 & 1) != 0) && (uVar4 = (**(code **)(*(long *)*plVar1 + 0x88))(), (uVar4 & 1) == 0))
    {
      FUN_006c5d20(auStack_80,lVar5 + 0x220);
      local_48 = local_60;
      goto LAB_00e0471c;
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


