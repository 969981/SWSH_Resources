/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007178f0; name: FUN_007178f0
 */


void FUN_007178f0(long param_1,long *param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long local_a8 [2];
  undefined1 *local_98;
  long local_90;
  long local_88;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  if (((param_2 != (long *)0x0) && (param_3 != (uint *)0x0)) &&
     (local_70 = param_4, FUN_00717af0(param_2,*param_3), *param_3 != 0)) {
    uVar4 = 0;
    do {
      local_78 = (long)(param_3 + uVar4 + 1) + (ulong)param_3[uVar4 + 1] + 4;
      lVar2 = *param_2;
      if ((ulong)((param_2[1] - lVar2 >> 4) * -0xf0f0f0f0f0f0f0f) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      FUN_00717c20(local_a8,param_1 + 0x60,&local_78,&local_70);
      lVar5 = *(long *)(param_1 + 0x178);
      if (lVar5 == 0) {
        lVar5 = *(long *)(param_1 + 8);
      }
      uVar3 = FUN_006e1b00(param_1);
      FUN_0071b750(&local_68,*(undefined8 *)PTR_DAT_02710788,0,local_a8,0,lVar5,uVar3,
                   param_1 + 0x410);
      plVar6 = (long *)(lVar2 + uVar4 * 0x110 + 8);
      if (*plVar6 != 0) {
        (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
        *plVar6 = 0;
      }
      lVar5 = local_68;
      *plVar6 = local_68;
      if (local_68 != 0) {
        plVar6 = (long *)(local_68 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        if ((*(long *)(lVar2 + uVar4 * 0x110 + 0x10) != 0) ||
           (*(long *)(lVar2 + uVar4 * 0x110 + 0x90) != 0)) {
          FUN_006e1e70(lVar5,lVar2 + uVar4 * 0x110,1);
        }
        FUN_006e1be0(lVar5);
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      if ((local_90 != 0) && (local_a8[0] != 0)) {
        (**(code **)(*(long *)(local_a8[0] + 0x48) + 0x18))();
      }
      local_a8[0] = 0;
      local_a8[1] = 0xcbf29ce484222645;
      local_98 = &DAT_01d38550;
      local_90 = 0;
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
    } while (uVar1 < *param_3);
  }
  return;
}


