/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01148c90; name: FUN_01148c90
 */


undefined8 FUN_01148c90(void)

{
  bool bVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long local_108;
  long *local_100 [2];
  long alStack_f0 [4];
  long *local_d0;
  undefined8 *local_c0;
  long local_b8;
  long local_b0;
  char local_a0 [16];
  long *local_90 [2];
  long alStack_80 [4];
  long *local_60;
  undefined8 local_50;
  long local_40;
  
  FUN_0120e660(local_a0,*(undefined8 *)PTR_DAT_027185f8);
  if (local_a0[0] != '\0') {
    FUN_007a2d60(local_100,local_90);
    puVar2 = PTR_DAT_02718f20;
    if (local_b8 != 0) {
      lVar6 = local_b8 << 3;
      puVar4 = local_c0;
      do {
        FUN_011ffbe0(&local_108,*(undefined8 *)puVar2,*puVar4);
        if ((local_108 != 0) && ((*(byte *)(*(long *)(local_108 + 8) + 0x106) >> 3 & 1) == 0)) {
          bVar1 = true;
          goto joined_r0x01148e08;
        }
        puVar4 = puVar4 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    bVar1 = false;
joined_r0x01148e08:
    if (local_b0 != 0) {
      (**(code **)(*local_100[0] + 0x18))(local_100[0],local_c0,local_b0 << 3,8);
    }
    if (alStack_f0 == local_d0) {
      pcVar3 = *(code **)(*local_d0 + 0x20);
LAB_01148d6c:
      (*pcVar3)();
    }
    else if (local_d0 != (long *)0x0) {
      pcVar3 = *(code **)(*local_d0 + 0x28);
      goto LAB_01148d6c;
    }
    if (bVar1) {
      uVar5 = 0;
      goto joined_r0x01148dd0;
    }
  }
  uVar5 = 1;
joined_r0x01148dd0:
  if (local_a0[0] != '\0') {
    if (local_40 != 0) {
      (**(code **)(*local_90[0] + 0x18))(local_90[0],local_50,local_40 << 3,8);
    }
    if (alStack_80 == local_60) {
      pcVar3 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) {
        return uVar5;
      }
      pcVar3 = *(code **)(*local_60 + 0x28);
    }
    (*pcVar3)();
  }
  return uVar5;
}


