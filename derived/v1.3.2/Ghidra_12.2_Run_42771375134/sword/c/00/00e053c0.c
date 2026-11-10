/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e053c0; name: FUN_00e053c0
 */


undefined8 FUN_00e053c0(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint local_80 [8];
  undefined8 local_60;
  undefined8 local_48;
  
  if (*(char *)(param_2 + 99) == '\0') {
    return 0;
  }
  local_48 = 0xcbf29ce484222645;
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar2 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar1 == plVar2) {
LAB_00e0546c:
      FUN_00e305f0(*(undefined8 *)(param_1 + 0x68),2,&local_48);
      FUN_00e30d30(param_2,param_3);
      local_80[0] = (uint)*(byte *)(param_2 + 0x14);
      FUN_00e311c0(*(undefined8 *)(param_1 + 0x68),param_3,local_80,0);
      FUN_00e32b00(*(undefined8 *)(param_1 + 0x68),param_3);
      return 1;
    }
    lVar4 = *plVar1;
    uVar3 = FUN_015b5320(lVar4 + 0x50);
    if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*(long *)*plVar1 + 0x88))(), (uVar3 & 1) == 0))
    {
      FUN_006c5d20(local_80,lVar4 + 0x220);
      local_48 = local_60;
      goto LAB_00e0546c;
    }
    plVar1 = plVar1 + 1;
  } while( true );
}


