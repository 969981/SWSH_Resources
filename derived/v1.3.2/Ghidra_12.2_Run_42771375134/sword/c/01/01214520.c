/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01214520; name: FUN_01214520
 */


void FUN_01214520(long param_1,long *param_2)

{
  undefined4 local_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if ((*param_2 != 0) && (0x5e < (ulong)param_2[1])) {
    FUN_0121cd80(&local_70,*param_2 + 0x2e,0x31);
    *(undefined8 *)(param_1 + 0xcc) = local_68;
    *(ulong *)(param_1 + 0xc4) = CONCAT44(uStack_6c,local_70);
    *(ulong *)(param_1 + 0xec) = CONCAT44(uStack_44,uStack_48);
    *(ulong *)(param_1 + 0xe4) = CONCAT44(uStack_4c,local_50);
    *(undefined8 *)(param_1 + 0xdc) = local_58;
    *(undefined8 *)(param_1 + 0xd4) = local_60;
    *(undefined4 *)(param_1 + 0x10c) = local_28;
    *(ulong *)(param_1 + 0x104) = CONCAT44(uStack_2c,local_30);
    *(ulong *)(param_1 + 0xfc) = CONCAT44(uStack_34,uStack_38);
    *(ulong *)(param_1 + 0xf4) = CONCAT44(uStack_3c,local_40);
    if (*(char *)(param_1 + 0xc0) == '\0') {
      *(undefined1 *)(param_1 + 0xc0) = 1;
    }
    if ((*param_2 != 0) && (0x83 < (ulong)param_2[1])) {
      FUN_0121b9b0(&local_70,*param_2 + 0x5f,0x25);
      if (*(char *)(param_1 + 0x70) == '\0') {
        *(undefined1 *)(param_1 + 0x74) = (undefined1)local_70;
        *(undefined1 *)(param_1 + 0x78) = 0;
        if ((uStack_6c & 0xff) != 0) {
          *(undefined8 *)(param_1 + 0x7c) = local_68;
          *(undefined4 *)(param_1 + 0x94) = local_50;
          *(undefined8 *)(param_1 + 0x8c) = local_58;
          *(undefined8 *)(param_1 + 0x84) = local_60;
          *(undefined1 *)(param_1 + 0x78) = 1;
        }
        *(ulong *)(param_1 + 0x98) = CONCAT44(uStack_48,uStack_4c);
        *(ulong *)(param_1 + 0xa0) = CONCAT44(local_40,uStack_44);
        *(ulong *)(param_1 + 0xb5) =
             CONCAT17((undefined1)local_28,CONCAT43(uStack_2c,local_30._1_3_));
        *(ulong *)(param_1 + 0xa8) = CONCAT44(uStack_38,uStack_3c);
        *(ulong *)(param_1 + 0xb0) = CONCAT44(local_30,uStack_34);
        *(undefined1 *)(param_1 + 0x70) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x74) = (undefined1)local_70;
        if (*(char *)(param_1 + 0x78) == '\0') {
          if ((uStack_6c & 0xff) != 0) {
            *(undefined8 *)(param_1 + 0x7c) = local_68;
            *(undefined4 *)(param_1 + 0x94) = local_50;
            *(undefined8 *)(param_1 + 0x8c) = local_58;
            *(undefined8 *)(param_1 + 0x84) = local_60;
            *(undefined1 *)(param_1 + 0x78) = 1;
          }
        }
        else if ((uStack_6c & 0xff) == 0) {
          *(undefined1 *)(param_1 + 0x78) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x94) = (undefined1)local_50;
          *(undefined8 *)(param_1 + 0x8c) = local_58;
          *(undefined8 *)(param_1 + 0x84) = local_60;
          *(undefined8 *)(param_1 + 0x7c) = local_68;
        }
        *(ulong *)(param_1 + 0x98) = CONCAT44(uStack_48,uStack_4c);
        *(ulong *)(param_1 + 0xb5) =
             CONCAT17((undefined1)local_28,CONCAT43(uStack_2c,local_30._1_3_));
        *(ulong *)(param_1 + 0xa8) = CONCAT44(uStack_38,uStack_3c);
        *(ulong *)(param_1 + 0xb0) = CONCAT44(local_30,uStack_34);
        *(ulong *)(param_1 + 0xa0) = CONCAT44(local_40,uStack_44);
      }
      if ((uStack_6c & 0xff) != 0) {
        uStack_6c = uStack_6c & 0xffffff00;
      }
    }
  }
  FUN_01214700(param_1,param_2);
  return;
}


