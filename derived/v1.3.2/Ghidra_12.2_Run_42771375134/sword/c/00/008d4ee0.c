/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d4ee0; name: FUN_008d4ee0
 */


void FUN_008d4ee0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long local_80 [2];
  undefined1 *local_70;
  long local_68;
  long local_60;
  undefined *local_48;
  
  puVar3 = PTR_DAT_02717bd8;
  puVar2 = PTR_PTR_02710928;
  if (*(long *)PTR_DAT_02717bd8 != 0) {
    uVar5 = 0;
    do {
      if (((uint)uVar5 & 0x7fffffff) < 0xd) {
        local_48 = (&PTR_s_bin_battle_ai_script_btl_ai_basi_026197e0)[(long)(uVar5 << 0x21) >> 0x21]
        ;
      }
      else {
        local_48 = (undefined *)0x0;
      }
      FUN_008d4da0(local_80,&local_48);
      plVar4 = local_80 + 2;
      if (local_68 != 0) {
        plVar4 = (long *)puVar2;
        if (local_80[0] != 0) {
          plVar4 = (long *)(local_80[0] + 0x60);
        }
      }
      nn::fs::DisableIndividualFileDataCache((char *)*plVar4);
      if ((local_68 != 0) && (local_80[0] != 0)) {
        (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
      }
      local_80[0] = 0;
      local_80[1] = 0xcbf29ce484222645;
      local_70 = &DAT_01d38550;
      local_68 = 0;
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      uVar1 = (uint)uVar5 + 1;
      uVar5 = (ulong)uVar1;
    } while (uVar1 != 0xd);
    if (puVar3 + 8 != puVar3 + 0xd8) {
      if (*(long *)(puVar3 + 8) != 0) {
        (**(code **)(**(long **)puVar3 + 0x18))
                  (*(long **)puVar3,*(long *)(puVar3 + 8),*(undefined8 *)(puVar3 + 0x10),8);
      }
      if (*(long *)(puVar3 + 0x18) != 0) {
        (**(code **)(**(long **)puVar3 + 0x18))
                  (*(long **)puVar3,*(long *)(puVar3 + 0x18),*(undefined8 *)(puVar3 + 0x20),8);
      }
      if (*(long *)(puVar3 + 0x28) != 0) {
        (**(code **)(**(long **)puVar3 + 0x18))
                  (*(long **)puVar3,*(long *)(puVar3 + 0x28),*(undefined8 *)(puVar3 + 0x30),8);
      }
      if (*(long *)(puVar3 + 0x38) != 0) {
        (**(code **)(**(long **)puVar3 + 0x18))
                  (*(long **)puVar3,*(long *)(puVar3 + 0x38),*(undefined8 *)(puVar3 + 0x40),8);
      }
      if (*(long *)(puVar3 + 0x48) != 0) {
        (**(code **)(**(long **)puVar3 + 0x18))
                  (*(long **)puVar3,*(long *)(puVar3 + 0x48),*(undefined8 *)(puVar3 + 0x50),8);
      }
      if (*(long *)(puVar3 + 0x58) != 0) {
        (**(code **)(**(long **)puVar3 + 0x18))
                  (*(long **)puVar3,*(long *)(puVar3 + 0x58),*(undefined8 *)(puVar3 + 0x60),8);
      }
      if (*(long *)(puVar3 + 0x68) != 0) {
        (**(code **)(**(long **)puVar3 + 0x18))
                  (*(long **)puVar3,*(long *)(puVar3 + 0x68),*(undefined8 *)(puVar3 + 0x70),8);
      }
      if (*(long *)(puVar3 + 0x78) != 0) {
        (**(code **)(**(long **)puVar3 + 0x18))
                  (*(long **)puVar3,*(long *)(puVar3 + 0x78),*(undefined8 *)(puVar3 + 0x80),8);
      }
      if (*(long *)(puVar3 + 0x88) != 0) {
        (**(code **)(**(long **)puVar3 + 0x18))
                  (*(long **)puVar3,*(long *)(puVar3 + 0x88),*(undefined8 *)(puVar3 + 0x90),8);
      }
      if (*(long *)(puVar3 + 0x98) != 0) {
        (**(code **)(**(long **)puVar3 + 0x18))
                  (*(long **)puVar3,*(long *)(puVar3 + 0x98),*(undefined8 *)(puVar3 + 0xa0),8);
      }
      if (*(long *)(puVar3 + 0xa8) != 0) {
        (**(code **)(**(long **)puVar3 + 0x18))
                  (*(long **)puVar3,*(long *)(puVar3 + 0xa8),*(undefined8 *)(puVar3 + 0xb0),8);
      }
      if (*(long *)(puVar3 + 0xb8) != 0) {
        (**(code **)(**(long **)puVar3 + 0x18))
                  (*(long **)puVar3,*(long *)(puVar3 + 0xb8),*(undefined8 *)(puVar3 + 0xc0),8);
      }
      if (*(long *)(puVar3 + 200) != 0) {
        (**(code **)(**(long **)puVar3 + 0x18))
                  (*(long **)puVar3,*(long *)(puVar3 + 200),*(undefined8 *)(puVar3 + 0xd0),8);
      }
    }
    *(undefined8 *)puVar3 = 0;
  }
  return;
}


