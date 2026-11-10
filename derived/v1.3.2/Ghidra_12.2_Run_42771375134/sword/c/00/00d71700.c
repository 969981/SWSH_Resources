/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d71700; name: FUN_00d71700
 */


void FUN_00d71700(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  local_40 = param_2;
  local_38 = param_3;
  if (lVar2 == 0) {
    FUN_00d717f0(param_1,0,&local_40);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00d717f0(param_1,lVar2,&local_40);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if (param_4 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
    if (*param_1 != 0) {
      puVar1 = *(undefined8 **)(*param_1 + 0x60);
      if (puVar1 != (undefined8 *)0x0) {
        plVar3 = (long *)(**(code **)*puVar1)(puVar1);
        lVar2 = FUN_00d71fb0();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar2) {
            puVar1 = puVar1 + -10;
            goto LAB_00d717d0;
          }
        }
      }
      puVar1 = (undefined8 *)0x0;
    }
LAB_00d717d0:
    *param_4 = 0;
    param_4[1] = 0;
    puVar1[0x14] = param_4;
  }
  return;
}


