/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eaf260; name: FUN_00eaf260
 */


uint FUN_00eaf260(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [32];
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70 [8];
  
  local_70[0] = 0xcbf29ce484222645;
  uVar2 = FUN_00fa3c10(local_70);
  if ((uVar2 & 1) != 0) {
    FUN_00db5e00(local_70,param_1,param_2,4);
    uVar2 = FUN_006c5d60(local_70);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_006c5d20(auStack_b0,local_70);
      local_78 = local_90;
      uVar2 = FUN_00eaff20(uVar3,param_3,&local_78);
      if ((uVar2 & 1) != 0) {
        if (param_4 != (undefined8 *)0x0) {
          *param_4 = local_78;
        }
        FUN_006c5c80(local_70);
        uVar3 = *(undefined8 *)(param_1 + 0x288);
        FUN_00e821b0();
        uVar1 = FUN_00e81ef0(uVar3,param_2,0);
        goto LAB_00eaf308;
      }
    }
    FUN_006c5c80(local_70);
  }
  uVar1 = 0;
LAB_00eaf308:
  return uVar1 & 1;
}


