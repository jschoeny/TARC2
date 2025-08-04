	.align 2
voicegroup391:: @ DPPt main
	voice_directsound 60, 0, DirectSoundWaveData_dp_reverscyn_16, 255, 0, 255, 16
	voice_keysplit_all voicegroup392				 @ drums 1
	voice_keysplit voicegroup395, KeySplitTableDP6     @ piano
	voice_keysplit voicegroup396, KeySplitTableDP7     @ piano low
	voice_keysplit voicegroup397, KeySplitTableDP8     @ ep 1
	voice_keysplit voicegroup398, KeySplitTableDP9     @ ep 2
	voice_keysplit_all voicegroup393				 @ drums 2
	voice_keysplit voicegroup399, KeySplitTableDP10    @ clavi
	voice_directsound 60, 0, DirectSoundWaveData_purenoise, 42, 0, 57, 192
	voice_directsound 60, 0, DirectSoundWaveData_dp_glocken_c6_16, 255, 247, 0, 208
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_50, 255, 242, 25, 205
	voice_keysplit voicegroup400, KeySplitTableDP11    @ vibraphone
	voice_keysplit voicegroup401, KeySplitTableDP12    @ marimba
	voice_keysplit voicegroup402, KeySplitTableDP13    @ xylophone
	voice_keysplit voicegroup403, KeySplitTableDP14    @ tubular bell
	voice_keysplit voicegroup404, KeySplitTableDP15    @ trinity piano
	voice_keysplit_all voicegroup394				 @ synth kick + snare
	voice_keysplit voicegroup405, KeySplitTableDP16    @ rotary organ
	voice_keysplit voicegroup406, KeySplitTableDP17    @ straight organ
	voice_directsound 60, 0, DirectSoundWaveData_dp_org5_c3_16, 255, 175, 235, 171
	voice_directsound 60, 0, DirectSoundWaveData_dp_sawtoothlead60, 255, 200, 255, 171
	voice_keysplit voicegroup407, KeySplitTableDP18    @ accordion
	voice_directsound 60, 0, DirectSoundWaveData_dp_harmonica_c3_16, 67, 247, 191, 171
	voice_directsound 60, 0, DirectSoundWaveData_dp_fretnoise60, 255, 0, 255, 16
	voice_keysplit voicegroup408, KeySplitTableDP19    @ acoustic guitar
	voice_directsound 60, 0, DirectSoundWaveData_dp_bluesgt_a2_16, 255, 255, 227, 208
	voice_directsound 60, 0, DirectSoundWaveData_dp_eternaguitar36, 255, 253, 159, 208
	voice_keysplit voicegroup409, KeySplitTableDP20    @ clean guitar
	voice_directsound 60, 0, DirectSoundWaveData_dp_spearpillarwind60, 255, 0, 255, 32
	voice_keysplit voicegroup410, KeySplitTableDP21    @ distortion guitar 1
	voice_keysplit voicegroup411, KeySplitTableDP22    @ power guitar
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_50, 255, 242, 25, 0
	voice_keysplit voicegroup412, KeySplitTableDP23    @ upright bass 1
	voice_directsound 60, 0, DirectSoundWaveData_dp_sting_bass_e1_16, 255, 251, 0, 208
	voice_directsound 60, 0, DirectSoundWaveData_dp_pickbass_e1_16, 255, 251, 0, 208
	voice_directsound 60, 0, DirectSoundWaveData_dp_fretlessbass_d1_16, 255, 0, 255, 196
	voice_directsound 60, 0, DirectSoundWaveData_dp_slapbass_g1_16, 255, 0, 255, 222
	voice_directsound 60, 0, DirectSoundWaveData_dp_slapbass_c1_16, 255, 0, 255, 216
	voice_directsound 60, 0, DirectSoundWaveData_dp_synbass1_c2_16, 255, 42, 255, 196
	voice_directsound 60, 0, DirectSoundWaveData_dp_synbass2_c1_16, 255, 0, 255, 222
	voice_keysplit voicegroup413, KeySplitTableDP24    @ violin
	voice_directsound 60, 0, DirectSoundWaveData_dp_oct_g3_16, 255, 235, 255, 212
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_50, 255, 252, 0, 96
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_wind, 37, 244, 155, 226
	voice_directsound 60, 0, DirectSoundWaveData_dp_explosion, 37, 255, 0, 246
	voice_keysplit voicegroup414, KeySplitTableDP25    @ pizzicato
	voice_keysplit voicegroup415, KeySplitTableDP26    @ harp
	voice_keysplit voicegroup416, KeySplitTableDP27    @ timpani 1
	voice_keysplit voicegroup417, KeySplitTableDP28    @ strings
	voice_directsound 60, 0, DirectSoundWaveData_dp_octlow_cs2_16, 255, 200, 255, 196
	voice_directsound 60, 0, DirectSoundWaveData_dp_octlowbra_b2_16, 255, 200, 255, 226
	voice_keysplit voicegroup418, KeySplitTableDP27    @ timpani 2
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_50, 255, 250, 0, 220
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_square_wave, 255, 250, 0, 171 @ shift up by 1 octave
	voice_directsound 60, 0, DirectSoundWaveData_sc88pro_bubbles, 150, 0, 255, 0
	voice_directsound 60, 0, DirectSoundWaveData_dp_octhit_c2_16, 255, 200, 255, 222
	voice_keysplit voicegroup419, KeySplitTableDP29    @ trumpets 1
	voice_keysplit voicegroup420, KeySplitTableDP30    @ trombone
	voice_keysplit voicegroup421, KeySplitTableDP31    @ tuba
	voice_keysplit voicegroup422, KeySplitTableDP29    @ trumpets 2
	voice_keysplit voicegroup423, KeySplitTableDP9     @ french horns
	voice_keysplit voicegroup424, KeySplitTableDP32    @ distortion guitar 2
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_25, 224, 242, 101, 220
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_12, 224, 242, 101, 220
	voice_directsound 60, 0, DirectSoundWaveData_dp_synbass_c1_16, 255, 42, 255, 216
	voice_directsound 60, 0, DirectSoundWaveData_dp_altosax_c3_16, 255, 219, 252, 196
	voice_keysplit voicegroup425, KeySplitTableDP23    @ upright bass 2
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_50, 224, 242, 101, 220
	voice_directsound 60, 0, DirectSoundWaveData_dp_oboe_c3_16, 255, 243, 127, 216
	voice_directsound 60, 0, DirectSoundWaveData_purenoise, 240, 242, 0, 182
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_25, 58, 0, 101, 220
	voice_directsound 60, 0, DirectSoundWaveData_dp_sy_clarinet_c3_16, 255, 243, 159, 216
	voice_directsound 60, 0, DirectSoundWaveData_puresquare_50, 224, 242, 101, 182
	voice_keysplit voicegroup426, KeySplitTableDP33    @ flute
	voice_directsound 60, 0, DirectSoundWaveData_dp_woodpat_c4_16, 100, 247, 78, 136
	voice_directsound 60, 0, DirectSoundWaveData_dp_basschoir36, 255, 200, 255, 171
	voice_directsound 60, 0, DirectSoundWaveData_dp_tenorchoir48, 255, 200, 255, 171
	voice_directsound 60, 0, DirectSoundWaveData_dp_sopranochoir60, 255, 200, 255, 171
@	voice_directsound 60, 0, DirectSoundWaveData_dp_whistle_c5_16, 255, 247, 78, 196			@ remaining voices wrap around
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy		@ to the next voice group, so
@	voice_directsound 60, 0, DirectSoundWaveData_dp_orchhitmajor60, 255, 200, 255, 171			@ have some dittos
@	voice_directsound 60, 0, DirectSoundWaveData_dp_orchhitminor60, 255, 200, 255, 171
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_square_1 60, 0, 0, 2, 0, 0, 15, 0											@ dummy
@	voice_keysplit voicegroup427, KeySplitTableDP25    @ music box (platinum only)
@	voice_keysplit voicegroup428, KeySplitTableDP34    @ banjo
